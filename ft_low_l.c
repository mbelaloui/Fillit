/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_low_l.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 00:44:51 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/09 00:46:56 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

int		ft_low_l(char **tetrim_mat, int y)
{
	int result;

	result = 0;
	result += ft_is_u(tetrim_mat, 3, y);
	if (y == 0)
		result += ft_is_r(tetrim_mat, 3, y);
	else
	{
		if (y > 0 && y < 3)
		{
			result += ft_is_l(tetrim_mat, 3, y);
			result += ft_is_r(tetrim_mat, 3, y);
		}
		else
			result += ft_is_l(tetrim_mat, 3, y);
	}
	return (result);
}
