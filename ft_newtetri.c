/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newtetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 12:44:01 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/06 13:11:31 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

t_tetri		*ft_newtetri(char **tetrim)
{
	t_tetri *result;

	if (tetrim == NULL)
		return (NULL);
	result = (t_tetri *)malloc(sizeof(result));
	if(result == NULL)
		return (NULL);
	result->tetriminos = tetrim;
	result->next = NULL;
	return (result);
}
