/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 21:13:50 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/17 02:35:24 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t			pt;
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;

	pt = 0;
	temp_s1 = (unsigned	char *)s1;
	temp_s2 = (unsigned char *)s2;
	while (temp_s1[pt] != '\0' || temp_s2[pt] != '\0')
	{
		if (temp_s1[pt] != temp_s2[pt])
			return (temp_s1[pt] - temp_s2[pt]);
		pt++;
	}
	return (0);
}
