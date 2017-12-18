/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 21:04:09 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/24 14:45:58 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *ha, const char *ne, size_t n)
{
	size_t	pt1;
	size_t	pt2;
	char	*result;

	pt1 = 0;
	result = NULL;
	if (!ft_strlen(ne))
		return ((char *)ha);
	while (ha[pt1] && (pt1 < n))
	{
		pt2 = 0;
		while ((ha[pt1 + pt2] == ne[pt2]) && ((pt1 + pt2) < n) && ne[pt2])
		{
			pt2++;
		}
		if (!ne[pt2])
			return ((char *)&ha[pt1]);
		pt1++;
	}
	return ((char *)result);
}
