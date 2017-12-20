/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newtetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 12:44:01 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/18 17:02:25 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit_p_1.h"

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

static	int		ft_get_x_y_tetri(char **tetri_mat, int *tab_x, int *tab_y)
{
	int pt;
	int x;
	int y;

	if (tetri_mat == NULL || tab_x == NULL || tab_y == NULL)
		return (0);
	x = 0;
	pt = 0;
	while (tetri_mat[x])
	{
		y = 0;
		while (tetri_mat[x][y])
			if (tetri_mat[x][y++] == '#')
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

t_tetri			*ft_newtetri(char **tetri_mat, char c)
{
	t_tetri	*result;

	result = (t_tetri *)malloc(sizeof(t_tetri));
	if (result == NULL || !ft_isupper(c) || tetri_mat == NULL)
		return (NULL);
	result->tab_x = (int *)malloc(4 * sizeof(result->tab_x));
	result->tab_y = (int *)malloc(4 * sizeof(result->tab_y));
	if (result->tab_x == NULL || result->tab_y == NULL)
		return (NULL);
	ft_get_x_y_tetri(tetri_mat, result->tab_x, result->tab_y);
	result->c = c;
	result->next = NULL;
	return (result);
}
