/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dim_tetrnim.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 00:54:29 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/09 01:33:34 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

int		ft_check_dim_tetrim(char **tetrim_mat)
{
	int x;
	int y;

	x = 0;
	while (tetrim_mat[x] && x < 5)
	{
		y = 0;
		while ((tetrim_mat[x][y]) && y < 5)
		{
			y++;
			//(*tetrim_mat)++;
		}
		if (y != 4)
		{
			ft_chartoint((tetrim_mat[x][y]));
			ft_putstr("\n\n ici on sotr ");
			ft_putnbr(x);
			ft_putnbr(y);
			return (0);
		}
		x++;
		//tetrim_mat++;
	}
	return ((x == 4) ? 1 : 0);
}
