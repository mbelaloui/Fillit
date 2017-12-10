/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_x_y.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 06:28:04 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/10 06:31:47 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

int		ft_get_x_y(char **tetrim_mat, int tab_x[], int tab_y[])
{
	int pt;
	int x;
	int y;

	if (tetrim_mat == NULL || tab_x == NULL || tab_y == NULL)
		return (0);
	x = 0;
	pt = 0;
	while (tetrim_mat[x])
	{
		y = 0;
		while (tetrim_mat[x][y])
		{
			if (tetrim_mat[x][y++] == '#')
			{
				tab_x[pt] = x - tab_x[0];
				tab_y[pt++] = y - tab_y[0];
			}
		}
		x++;
	}
	tab_x[0] = 0;
	tab_y[0] = 0;
	return (1);
}
