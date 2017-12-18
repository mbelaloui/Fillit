/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_tetrim_mat.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 16:22:34 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/18 20:29:49 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit_p_2.h"

void	ft_add_tetri(char ***mat, t_tetri *t, int x, int y)
{
	int pt;

	pt = 0;
	while (pt < 4)
	{
		(*mat)[x + t->tab_x[pt]][y + t->tab_y[pt]] = t->c;
		pt++;
	}
}

void	ft_rm_tetri(char ***mat, t_tetri *t, int x, int y)
{
	int pt;

	pt = 0;
	while (pt < 4)
	{
		(*mat)[x + t->tab_x[pt]][y + t->tab_y[pt]] = '.';
		pt++;
	}
}

int		ft_is_possible(char **mat, t_tetri *t, int dim_mat, t_point *point)
{
	int pt;

	if (!mat || !t || dim_mat < 2 || point->x < 0 || point->x > dim_mat
			|| point->y < 0 || point->y > dim_mat)
		return (0);
	pt = 0;
	while (pt < 4)
	{
		if (point->x + t->tab_x[pt] >= dim_mat)
			return (0);
		if (point->y + t->tab_y[pt] < 0 || point->y + t->tab_y[pt] >= dim_mat)
			return (0);
		if (mat[point->x + t->tab_x[pt]][point->y + t->tab_y[pt]] != '.')
			return (0);
		pt++;
	}
	return (1);
}

int		ft_put_tetri_mat(char ***mat, t_tetri *t, int dim_mat)
{
	t_point *point;

	if (!(point = malloc(sizeof(t_point))))
		return (0);
	point->x = -1;
	while (point->x++ < dim_mat && t)
	{
		point->y = -1;
		while (point->y++ < dim_mat && t)
		{
			if (ft_is_possible(*mat, t, dim_mat, point))
			{
				ft_add_tetri(mat, t, point->x, point->y);
				if (ft_put_tetri_mat(mat, t->next, dim_mat))
					return (1);
				else
					ft_rm_tetri(mat, t, point->x, point->y);
			}
		}
	}
	if (t == NULL)
		return (1);
	else
		return (0);
}
