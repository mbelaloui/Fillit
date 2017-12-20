/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dim_tetrnim.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 00:54:29 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/18 19:02:25 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit_p_1.h"

int		ft_check_dim_tetri(char **tetri_mat)
{
	int x;
	int y;

	x = 0;
	if (tetri_mat == NULL)
		return (0);
	while (tetri_mat[x] && x < 5)
	{
		y = 0;
		while ((tetri_mat[x][y]) && y < 5)
			y++;
		if (y != 4)
			return (0);
		x++;
	}
	return ((x == 4) ? 1 : 0);
}
