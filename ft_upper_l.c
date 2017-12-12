/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upper_l.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 00:31:22 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/12 12:06:37 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

int		ft_upper_l(char **tetrim_mat, int y)
{
	int result;

	result = 0;
	if (tetrim_mat == NULL || y < 0 || y > 3)
		return (0);
	result += ft_is_d(tetrim_mat, 0, y);
	if (y == 0)
		result += ft_is_r(tetrim_mat, 0, y);
	else
	{
		if (y > 0 && y < 3)
		{
			result += ft_is_l(tetrim_mat, 0, y);
			result += ft_is_r(tetrim_mat, 0, y);
		}
		else
			result += ft_is_l(tetrim_mat, 0, y);
	}
	return (result);
}
