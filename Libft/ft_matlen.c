/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 13:56:44 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/23 16:48:34 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_matlen(char **mat)
{
	size_t length;

	length = 0;
	if (mat == NULL)
		return (length);
	while (*mat++)
		length++;
	return (length);
}
