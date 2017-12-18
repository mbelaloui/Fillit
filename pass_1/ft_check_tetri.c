/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 01:05:03 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/18 19:05:10 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit_p_1.h"

int		ft_check_tetri(char **tetri_mat)
{
	if (tetri_mat == NULL)
		return (0);
	if (ft_check_dim_tetri(tetri_mat) == 0)
		return (0);
	if (ft_check_nbr_hashtag(tetri_mat) == 0)
		return (0);
	if (ft_check_nbr_relations(tetri_mat) == 0)
		return (0);
	return (1);
}
