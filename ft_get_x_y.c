/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_x_y.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 06:28:04 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/12 10:49:47 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

static	void	ft_absolut_tab(int *tab)
{
	int pt;

	pt = 1;
	while (pt < 4)
	{
		tab[pt] = tab[pt] - tab[0];
		pt++;
	}
	tab[0] = 0;
}

int				ft_get_x_y(char **tetrim_mat, int *tab_x, int *tab_y)
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
			if (tetrim_mat[x][y++] == '#')
			{
				tab_x[pt] = x;
				tab_y[pt++] = y;
			}
		x++;
	}
	ft_absolut_tab(tab_x);
	ft_absolut_tab(tab_y);
	return (1);
}
