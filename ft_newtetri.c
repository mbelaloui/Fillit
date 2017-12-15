/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newtetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 12:44:01 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/15 17:33:47 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

t_tetri		*ft_newtetri(char **tetrim, char c)
{
	t_tetri	*result;

	result = (t_tetri *)malloc(sizeof(t_tetri));
	if (result == NULL || !ft_isupper(c) || tetrim == NULL)
		return (NULL);
	result->tab_x = (int *)malloc(4 * sizeof(result->tab_x));
	result->tab_y = (int *)malloc(4 * sizeof(result->tab_y));
	if (result->tab_x == NULL || result->tab_y == NULL)
		return (NULL);
	ft_get_x_y_tetrim(tetrim, result->tab_x, result->tab_y);
	result->c = c;
	result->next = NULL;
	return (result);
}
