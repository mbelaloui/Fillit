/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isempty.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 05:07:02 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/30 18:18:37 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isempty(const char *str)
{
	size_t	pt;
	int		result;

	result = 1;
	pt = 0;
	while (str[pt])
	{
		if (ft_isprint(str[pt]) && str[pt] != ' ')
			result = 0;
		pt++;
	}
	return (result);
}
