/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:24:45 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/24 14:33:52 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	int		pt;
	int		length_s1;

	length_s1 = ft_strlen(s1);
	result = (char *)ft_strnew(length_s1);
	if (result == NULL)
		return (NULL);
	pt = 0;
	while (s1[pt])
	{
		result[pt] = s1[pt];
		pt++;
	}
	result[pt] = '\0';
	return ((char *)result);
}
