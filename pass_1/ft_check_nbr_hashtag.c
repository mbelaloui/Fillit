/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_nbr_hashtag.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 00:58:06 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/18 19:02:33 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit_p_1.h"

int		ft_check_nbr_hashtag(char **tetri_mat)
{
	int nbr_hashtag;
	int x;
	int y;

	nbr_hashtag = 0;
	x = 0;
	if (tetri_mat == NULL)
		return (0);
	while (tetri_mat[x])
	{
		y = 0;
		while (tetri_mat[x][y])
			if (tetri_mat[x][y++] == '#')
				nbr_hashtag++;
		tetri_mat++;
	}
	return ((nbr_hashtag == 4) ? 1 : 0);
}
