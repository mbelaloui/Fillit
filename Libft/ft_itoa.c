/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 08:42:04 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/30 15:50:26 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		min_nb(char *temp_tab)
{
	temp_tab[1] = '2';
	temp_tab[2] = '1';
	temp_tab[3] = '4';
	temp_tab[4] = '7';
	temp_tab[5] = '4';
	temp_tab[6] = '8';
	temp_tab[7] = '3';
	temp_tab[8] = '6';
	temp_tab[9] = '4';
	temp_tab[10] = '8';
	temp_tab[11] = '\0';
}

static	void	ecrire_nb(char *tab, int nb, size_t index)
{
	char	r;
	int		q;

	q = nb / 10;
	while (q > 0)
	{
		r = (nb % 10);
		tab[index] = ft_intochar(r);
		index--;
		nb = q;
		q = (nb / 10);
	}
	r = (nb % 10);
	tab[index--] = ft_intochar(r);
}

static char		*ft_positif(char *temp_tab, int nb, int len)
{
	temp_tab = (char *)ft_strnew(len);
	if (temp_tab == NULL)
		return (NULL);
	ecrire_nb(temp_tab, nb, ft_nbrlen(nb) - 1);
	return ((char *)(temp_tab));
}

static char		*ft_negatif(char *temp_tab, int nb, int len)
{
	temp_tab = (char *)ft_strnew(len + 1);
	if (temp_tab == NULL)
		return (NULL);
	temp_tab[0] = '-';
	if (nb == (-2147483648))
	{
		min_nb(temp_tab);
	}
	else
	{
		nb = -nb;
		ecrire_nb(temp_tab, nb, len);
	}
	return ((char *)(temp_tab));
}

char			*ft_itoa(int nb)
{
	char	*temp_tab;
	size_t	len;

	temp_tab = NULL;
	len = ft_nbrlen(nb);
	if (nb >= 0)
		return ((char *)ft_positif(temp_tab, nb, len));
	else
		return ((char *)ft_negatif(temp_tab, nb, len));
}
