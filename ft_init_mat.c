/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_mat_result.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 16:38:31 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/15 16:54:00 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

char	**ft_init_mat(int dim_mat_result)
{
	char	**mat_result;
	int		i;

	i = 0;
	if (dim_mat_result < 2)
		return (0);
	mat_result = (char **)malloc((dim_mat_result + 1) * sizeof(mat_result));
	if (*mat_result == NULL)
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
