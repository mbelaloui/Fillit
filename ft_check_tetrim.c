/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 01:05:03 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/09 04:24:14 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

int		ft_check_tetrim(char **tetrim_mat)
{
	int res;

	res = ft_check_nbr_relations(tetrim_mat) && ft_check_dim_tetrim(tetrim_mat);
	 return ( res && ft_check_nbr_hashtag(tetrim_mat));
}
