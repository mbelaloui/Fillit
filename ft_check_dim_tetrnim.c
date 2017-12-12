/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dim_tetrnim.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 00:54:29 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/12 12:36:33 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

int		ft_check_dim_tetrim(char **tetrim_mat)
{
	int x;
	int y;

	x = 0;
	if (tetrim_mat == NULL)
		return (0);
	while (tetrim_mat[x] && x < 5)
	{
		y = 0;
		while ((tetrim_mat[x][y]) && y < 5)
			y++;
		if (y != 4)
			return (0);
		x++;
	}
	return ((x == 4) ? 1 : 0);
}
