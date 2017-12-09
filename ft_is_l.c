/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_l.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 00:28:26 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/09 00:38:33 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

int		ft_is_l(char **tetrim_mat, int x, int y)
{
	return ((tetrim_mat[x][y - 1] == '#') ? 1 : 0);
}