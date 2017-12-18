/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:52:45 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/04 00:19:26 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		extract_nbr(unsigned char *str, unsigned long long nbr)
{
	int				pt;
	int				bool_valide;

	pt = 0;
	bool_valide = 1;
	while (str[pt] != '\0')
	{
		if (ft_isdigit(str[pt]))
		{
			nbr = str[pt] - 48 + (nbr * 10);
		}
		else
		{
			if (bool_valide)
				return (nbr);
			else
				return (0);
		}
		pt++;
	}
	return ((int)nbr);
}

int				ft_atoi(const char *str)
{
	unsigned char		*str_t;
	unsigned long long	nbr;
	int					pt;
	long				signe;

	str_t = (unsigned char *)str;
	pt = 0;
	nbr = 0;
	signe = 1;
	while ((str_t[pt] != '\0') && (str_t[pt] < 33) && (str_t[pt] != '\e'))
		pt++;
	if ((str_t[pt] == '-') || (str_t[pt] == '+'))
	{
		if ((str_t[pt + 1] != '-') && (str_t[pt + 1] != '+'))
			signe = (str_t[pt] == '-') ? -1 : 1;
	}
	else
	{
		if (ft_isdigit(str_t[pt]))
			nbr = str_t[pt] - 48 + (nbr * 10);
		else
			return (0);
	}
	nbr = extract_nbr(&str_t[++pt], nbr);
	return ((int)(nbr * signe));
}
