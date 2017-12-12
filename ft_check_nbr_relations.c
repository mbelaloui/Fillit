/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_nbr_relations.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 00:50:04 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/12 12:02:34 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

int		ft_check_nbr_relations(char **tetrim_mat)
{
	int nbr_relation;
	int temp;
	int x;
	int y;

	x = 0;
	nbr_relation = 0;
	if (tetrim_mat == NULL)
		return (0);
	while (tetrim_mat[x] && nbr_relation > -1)
	{
		y = 0;
		while (tetrim_mat[y] && nbr_relation > -1)
		{
			if (tetrim_mat[x][y++] == '#')
			{
				temp = ft_near(tetrim_mat, x, y);
				((temp) ? (nbr_relation += temp) : (nbr_relation = -2));
			}
		}
		x++;
	}
	return ((nbr_relation == 6 || nbr_relation == 8) ? 1 : 0);
}
