/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 06:41:11 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/10 06:43:21 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

t_tetri		*ft_initetri()
{
	t_tetri *result;

	result = (t_tetri *)malloc(sizeof(result));
	if (result == NULL)
		return (NULL);
	result->tetriminos = NULL;
	result->next = NULL;
	return (result);
}
