/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_near.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 00:47:14 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/09 01:14:19 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

int		ft_near(char **tetrim_mat, int x, int y)
{
	if (x == 0)
		return (ft_upper_l(tetrim_mat, y));
	else
	{
		if (x > 0 && x < 3)
			return (ft_mid_l(tetrim_mat, x, y));
		else
			return (ft_low_l(tetrim_mat, y));
	}
}
