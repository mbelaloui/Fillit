/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testestruct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 17:00:02 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/08 12:22:00 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"


int		main()
{

	char **map_2;
	map_2 = (char **)malloc(5 * sizeof(map_2));

	char *test_4 = "....";
	char *test_5 = "#...";
	char *test_6 = "#...";
	char *test_7 = "#...";

	map_2[0] = test_4;
	map_2[1] = test_5;
	map_2[2] = test_6;
	map_2[3] = test_7;
	map_2[4] = NULL;
	
	ft_putstr("**************\n");
	
	int x = 0;
	int y;

	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			ft_putchar(map_2[x][y++]);
		}
		ft_putstr("\n");
		x++;
	}

	ft_putstr("**************\n");

	ft_putnbr(check_nbr_relations(map_2));

//	ft_puttetri(tetri);

	return (0);
}
