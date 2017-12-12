/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getfirstindexword.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 17:51:55 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/01 19:47:31 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_getfirstindexword(const char *str, const int idword, const char c)
{
	size_t	pt;
	size_t	cp;
	size_t	strlen;

	strlen = ft_strlen(str);
	pt = 0;
	cp = 0;
	if (str == NULL)
		return (-1);
	while (str[pt] && (int)cp <= idword)
	{
		while (str[pt] == c)
			++pt;
		if (str[pt])
			cp++;
		while ((int)cp <= idword && str[pt] && str[pt] != c)
			++pt;
	}
	return ((idword > (int)cp) ? -1 : pt);
}
