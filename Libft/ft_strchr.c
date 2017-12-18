/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:11:28 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/13 21:10:34 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int pt;

	pt = 0;
	while (s[pt])
	{
		if (s[pt] == c)
			return ((char *)&s[pt]);
		pt++;
	}
	if (c == '\0')
		return ((char *)&s[pt]);
	return ((char *)NULL);
}
