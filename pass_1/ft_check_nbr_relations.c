/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_nbr_relations.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 00:50:04 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/18 19:02:43 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit_p_1.h"

int		ft_check_nbr_relations(char **tetri_mat)
{
	int nbr_relation;
	int temp;
	int x;
	int y;

	x = 0;
	nbr_relation = 0;
	if (tetri_mat == NULL)
		return (0);
	while (tetri_mat[x] && nbr_relation > -1)
	{
		y = 0;
		while (tetri_mat[y] && nbr_relation > -1)
		{
			if (tetri_mat[x][y] == '#')
			{
				temp = ft_near(tetri_mat, x, y);
				((temp) ? (nbr_relation += temp) : (nbr_relation = -2));
			}
			y++;
		}
		x++;
	}
	return ((nbr_relation == 6 || nbr_relation == 8) ? 1 : 0);
}
