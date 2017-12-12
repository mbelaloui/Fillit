/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mid_l.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 00:41:45 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/12 12:09:20 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

int		ft_mid_l(char **tetrim_mat, int x, int y)
{
	int result;

	result = 0;
	if (tetrim_mat == NULL || x < 1 || x > 3 || y < 0 || y > 3)
		return (0);
	result += ft_is_u(tetrim_mat, x, y);
	result += ft_is_d(tetrim_mat, x, y);
	if (y == 0)
		result += ft_is_r(tetrim_mat, x, y);
	else
	{
		if (y > 0 && y < 3)
		{
			result += ft_is_l(tetrim_mat, x, y);
			result += ft_is_r(tetrim_mat, x, y);
		}
		else
			result += ft_is_l(tetrim_mat, x, y);
	}
	return (result);
}
