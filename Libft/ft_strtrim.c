/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 03:05:00 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/30 18:00:51 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*estvide(char *result)
{
	result = (char *)ft_strnew(0);
	if (result == NULL)
		return (NULL);
	return (result);
}

char			*ft_strtrim(const char *s)
{
	size_t	debut;
	size_t	fin;
	char	*result;

	if (!s)
		return (NULL);
	result = NULL;
	if (ft_isempty(s))
		return (estvide(result));
	debut = 0;
	while (ft_isblank(s[debut]) || s[debut] == '\n')
		debut++;
	if (!s[debut])
		return (NULL);
	fin = (size_t)(ft_strlen(s) - 1);
	while (ft_isblank(s[fin]) || s[fin] == '\n')
		fin--;
	result = (char *)ft_memalloc(fin - debut + 1);
	if (result == NULL)
		return (NULL);
	return (ft_strcut(s, debut, fin + 1));
}
