/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttetrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 18:03:36 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/12 10:20:02 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

void	ft_puttetrim(t_tetri *tetrim)
{
	int pt;

	if (tetrim == NULL)
		ft_putstr("NULL\n");
	else
		while (tetrim != NULL)
		{
			ft_putchar(tetrim->c);
			pt = 0;
			while (pt < 4)
			{
				ft_putstr("\n x : ");
				ft_putnbr(tetrim->tab_x[pt]);
				ft_putstr(", y : ");
				ft_putnbr(tetrim->tab_y[pt]);
				pt++;
			}
			ft_putstr("\n-----------------\n");
			tetrim = tetrim->next;
		}
}
