/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtraking_fillit.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 16:18:21 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/20 18:09:28 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit_p_2.h"

static int		ft_sqrt_fillit(int nbr)
{
	int result;

	result = 0;
	if (nbr <= 0)
		return (0);
	while ((result * result) < nbr)
		result++;
	return (result - 1);
}

static	int		ft_get_dim_mat(int nbr_tetri)
{
	if (nbr_tetri <= 0)
		return (0);
	return (ft_sqrt_fillit(nbr_tetri * 4) + 1);
}

static	char	**ft_init_mat(int dim_mat_result)
{
	char	**mat_result;
	int		i;

	i = 0;
	if (dim_mat_result < 2)
		return (0);
	mat_result = (char **)malloc((dim_mat_result + 1) * sizeof(mat_result));
	if (mat_result == NULL)
		return (0);
	while (i < dim_mat_result)
	{
		mat_result[i] = ft_strnew(dim_mat_result);
		if (mat_result[i] == NULL)
			return (0);
		ft_memset(mat_result[i], '.', dim_mat_result);
		i++;
	}
	mat_result[i] = NULL;
	return (mat_result);
}

char			**ft_backtracking_fillit(t_tetri *lst_tetri, int nbr_tetri)
{
	int		dim_mat_result;
	char	**mat_result;

	dim_mat_result = ft_get_dim_mat(nbr_tetri);
	mat_result = NULL;
	mat_result = ft_init_mat(dim_mat_result);
	while (!ft_put_tetri_mat(&mat_result, lst_tetri, dim_mat_result))
	{
		ft_memdel((void**)mat_result);
		dim_mat_result++;
		mat_result = ft_init_mat(dim_mat_result);
	}
	return (mat_result);
}
