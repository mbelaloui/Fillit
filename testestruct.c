/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testestruct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 17:00:02 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/07 20:57:24 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"


int		near(int x, int y)
{
// haut 
	if (x == 0 && y == 0)
		ft_putstr("\t(x = 0 && y == 0)");
	
	if (x == 0 && y > 0 && y < 3)
		ft_putstr("\t(x = 0 && y > 0 && y < 3)");

	if (x == 0 && y == 3)
		ft_putstr("\t(x = 0 && y == 3)");


//millieu

	if (x > 0 && x < 3 && y > 0 && y < 3)
		ft_putstr("\t(x > 0 && x < 3 && y > 0 && y < 3)");


	
	//5
	if (y == 0 && x > 1 && x < 3)
		ft_putstr("\t(y = 0 && x > 1 && x < 3)");


	if (x ==	 3 && y == 0)
		ft_putstr("\t(x = 3 && y == 0)");
	if (x == 3 && y == 3)
		ft_putstr("\t(x = 3 && y == 3)");


	//4
	if (x == 3 && y > 0 && y < 3)
		ft_putstr("\t(x = 3 && y > 0 && y < 3)");


	//6
	if (y == 3 && x > 1 && x < 3)
		ft_putstr("\t(y = 3 && x > 1 && x < 3)");

	return (0);
}

int		main()
{
/*	t_tetri *tetri;
	char *map_1[5];
	char **map_2;

	map_2 = (char **)malloc(5 * sizeof(map_2));

	char *test_0 = "0...";
	char *test_1 = "0...";
	char *test_2 = "0...";
	char *test_3 = "0...";
//	char *test_4 = NULL;

	map_1[0] = test_0;
	map_1[1] = test_1;
	map_1[2] = test_2;
	map_1[3] = test_3;
	map_1[4] = NULL;

 	ft_putstr("**************\n");
	tetri = ft_newtetri(map_1);

	test->tetriminos[4] = NULL;
*/

/*	char *test_4 = "1...";
	char *test_5 = "2...";
	char *test_6 = "3...";
	char *test_7 = "4...";
	ft_putstr("**************\n");
	map_2[0] = test_4;
	map_2[1] = test_5;
	map_2[2] = test_6;
	map_2[3] = test_7;
	map_2[4] = NULL;
	ft_putstr("**************\n");
//	ft_addtetri(tetri, map_2);
*/

	int x = 0;
	int y;

	while (x < 4)
	{
		y = 0;
		while (y < 4)
			near(x, y++);
		ft_putstr("\n");
		x++;
	}


//	ft_puttetri(tetri);

	return (0);
}
