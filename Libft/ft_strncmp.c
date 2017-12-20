/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:54:08 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/21 10:22:32 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			pt;
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;

	temp_s1 = (unsigned char *)s1;
	temp_s2 = (unsigned char *)s2;
	pt = 0;
	while ((temp_s1[pt] != '\0' || temp_s2[pt] != '\0') && (pt < n))
	{
		if (temp_s1[pt] != temp_s2[pt])
			return (temp_s1[pt] - temp_s2[pt]);
		pt++;
	}
	return (0);
}
