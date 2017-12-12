/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 02:52:57 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/24 14:04:04 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		ln_s1;
	int		ln_s2;
	char	*result;

	if (s1 && s2)
	{
		ln_s1 = ft_strlen(s1);
		ln_s2 = ft_strlen(s2);
		result = (char *)ft_strnew(ln_s1 + ln_s2);
		if (result == NULL)
			return (NULL);
		ft_strcat(result, s1);
		ft_strcat(result, s2);
		return (result);
	}
	return (NULL);
}
