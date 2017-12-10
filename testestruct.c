/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testestruct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 17:00:02 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/10 19:47:33 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

int		main()
{

	char **map_2;
	map_2 = (char **)malloc(5 * sizeof(map_2));

	char *test_4 = "##..";
	char *test_5 = "##..";
	char *test_6 = "....";
	char *test_7 = "....";

	map_2[0] = test_4;
	map_2[1] = test_5;
	map_2[2] = test_6;
	map_2[3] = test_7;
	map_2[4] = NULL;
	
	ft_putstr("**************\n");
	
	int tab_x[4];
	int tab_y[4];
	int pt;

	ft_putstr("**************\n");

	ft_get_x_y(map_2, tab_x, tab_y);
	pt = 0;
	while (pt < 4)
	{
		ft_putstr("\n x : ");
		ft_putnbr(tab_x[pt]);
		ft_putstr(", y : ");
		ft_putnbr(tab_y[pt]);
		pt++;
	}
//	ft_putnbr(ft_check_nbr_relations(map_2));

//	ft_puttetri(tetri);

/*
	int i = -3;
	while (i++ < 30)
	{
		ft_putstr(" pour nbr_tetrim = ");
		ft_putnbr(i);
		ft_putstr(", la dim min =  ");
		
		ft_putnbr(ft_get_dim_mat(i));
		ft_putstr("\n");
	}
*/
	return (0);
}
