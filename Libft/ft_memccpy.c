/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 01:45:00 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/24 17:24:43 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	pt;
	char	temp_c;
	char	*temp_src;
	char	*temp_dest;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	pt = 0;
	temp_src = (char *)src;
	temp_dest = (char *)dest;
	temp_c = (char)c;
	while (pt < n)
	{
		temp_dest[pt] = temp_src[pt];
		if (temp_c == temp_src[pt])
			return (&temp_dest[pt + 1]);
		pt++;
	}
	return (NULL);
}
