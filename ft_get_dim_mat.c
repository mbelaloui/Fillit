/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_dim_mat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 04:20:40 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/12 09:50:11 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

int		ft_get_dim_mat(int nbr_tetrim)
{
	if (nbr_tetrim == 1)
		return (2);
	if (nbr_tetrim > 1 && nbr_tetrim < 5)
		return (4);
	if (nbr_tetrim > 4 && nbr_tetrim < 10)
		return (6);
	if (nbr_tetrim > 9 && nbr_tetrim < 17)
		return (8);
	if (nbr_tetrim > 16 && nbr_tetrim < 26)
		return (10);
	if (nbr_tetrim == 26)
		return (12);
	return (0);
}
