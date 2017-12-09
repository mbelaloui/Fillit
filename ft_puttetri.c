/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttetrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 18:03:36 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/09 01:08:59 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

void	ft_puttetri(t_tetri *tetrim)
{
	if (tetrim == NULL)
		ft_putstr("NULL");
	else
		while (tetrim != NULL)
		{
			ft_putmat(tetrim->tetriminos);
			tetrim = tetrim->next;
		}
}
