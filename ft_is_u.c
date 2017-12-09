/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 00:26:16 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/09 00:38:55 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

int		ft_is_u(char **tetrim_mat, int x, int y)
{
	return ((tetrim_mat[x - 1][y] == '#') ? 1 : 0);
}
