/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttetrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 18:03:36 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/10 19:39:38 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

void	ft_puttetrim(t_tetri *tetrim)
{
	if (tetrim == NULL)
		ft_putstr("NULL\n");
	else
		while (tetrim != NULL)
		{
			ft_putmat(tetrim->tetriminos);
			ft_putstr("-----------------\n");
			tetrim = tetrim->next;
		}
}
