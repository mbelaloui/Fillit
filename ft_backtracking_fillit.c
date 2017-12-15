/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtraking_fillit.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 16:18:21 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/15 19:32:46 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

char	**ft_backtracking_fillit(t_tetri *lst_tetrim, int nbr_tetrim)
{
	int		dim_mat_result;
	char	**mat_result;

	dim_mat_result = ft_get_dim_mat(nbr_tetrim);
	mat_result = ft_init_mat(dim_mat_result);
	while (!ft_put_tetrim_mat(&mat_result, lst_tetrim, dim_mat_result))
	{
		free(mat_result);
		dim_mat_result++;
		mat_result = ft_init_mat(dim_mat_result);
	}
	return (mat_result);
}
