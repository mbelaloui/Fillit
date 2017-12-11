/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newtetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 12:44:01 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/11 22:03:38 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

t_tetri		*ft_newtetri(char **tetrim, char c)
{
	t_tetri	*result;
	int		*tab_x;
	int		*tab_y;

	tab_x = (int *)malloc(4 * sizeof(tab_x));
	tab_y = (int *)malloc(4 * sizeof(tab_y));


	if (tetrim == NULL || tab_x == NULL || tab_y == NULL)
		return (NULL);
	result = (t_tetri *)malloc(sizeof(t_tetri));
	if (result == NULL)
		return (NULL);
	ft_get_x_y(tetrim, tab_x, tab_y);
	result->tetriminos = tetrim;
	result->tab_x = tab_x;
	result->tab_y = tab_y;
	result->c = c;
//	ft_putchar(c);
	/*
	int pt = 0;
	ft_putstr("x avant :");
	while (pt < 4)
	{
		ft_putstr("\n x = ");
		ft_putnbr(tab_x[pt]);
		ft_putstr("  y = ");
		ft_putnbr(tab_y[pt++]);
			
	}
*/	ft_putstr("\n");

	result->next = NULL;
	return (result);
}
