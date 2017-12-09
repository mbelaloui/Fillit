/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_nbr_hashtag.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 00:58:06 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/09 04:17:45 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

int		ft_check_nbr_hashtag(char **tetrim_mat)
{
	int nbr_hashtag;
	int x;
	int y;

	nbr_hashtag = 0;
	x = 0;
	while (tetrim_mat[x])
	{
		y = 0;
		while (tetrim_mat[x][y])
			if (tetrim_mat[x][y++] == '#')
				nbr_hashtag++;
		tetrim_mat++;
	}
	return ((nbr_hashtag == 4) ? 1 : 0);
}
