/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_near.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 00:47:14 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/18 19:56:30 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit_p_1.h"

static	int		ft_upper_l(char **tetrim_mat, int y)
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

static	int		ft_mid_l(char **tetrim_mat, int x, int y)
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

static	int		ft_low_l(char **tetrim_mat, int y)
{
	int result;

	if (tetrim_mat == NULL || y < 0 || y > 3)
		return (0);
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

int				ft_near(char **tetri_mat, int x, int y)
{
	if (tetri_mat == NULL || x < 0 || y < 0)
		return (0);
	if (x == 0)
		return (ft_upper_l(tetri_mat, y));
	else
	{
		if (x > 0 && x < 3)
			return (ft_mid_l(tetri_mat, x, y));
		else
			return (ft_low_l(tetri_mat, y));
	}
}
