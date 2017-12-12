/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tetrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 11:24:07 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/08 12:22:03 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft_tetri.h"

int		is_u(char **tetrim_mat, int x, int y)
{
	return ((tetrim_mat[x - 1][y] == '#') ? 1 : 0);
}

int		is_l(char **tetrim_mat, int x, int y)
{
	return ((tetrim_mat[x][y - 1] == '#') ? 1 : 0);
}

int		is_r(char **tetrim_mat, int x, int y)
{
	return ((tetrim_mat[x][y + 1] == '#') ? 1 : 0);
}

int		is_d(char **tetrim_mat, int x, int y)
{
	return ((tetrim_mat[x + 1][y] == '#') ? 1 : 0);
}

/* x = 0  y = [0 , 3] */
int		upper_l(char **tetrim_mat,int y)
{
	int result;

	 result = 0;
	if (y == 0)
	{
		result += is_r(tetrim_mat, 0, y);
		result += is_d(tetrim_mat, 0, y);
	}
	else
		if (y > 0 && y < 3)
		{
			result += is_l(tetrim_mat, 0, y);
			result += is_r(tetrim_mat, 0, y);
			result += is_d(tetrim_mat, 0, y);
		}
		else/*    if (y == 3)*/
		{
			result += is_l(tetrim_mat, 0, y);
			result += is_d(tetrim_mat, 0, y);
		}

/*		ft_putstr("\n**********************\n\t");
		ft_putstr("x : ");
		ft_putnbr(0);

		ft_putstr("\t y : ");
		ft_putnbr(y);

		ft_putstr("\t\n nbr_relation : ");
		ft_putnbr(result);
*/

    return (result);
}

/* x = [1, 2]    y = [0 , 3] */
int        mid_l(char **tetrim_mat, int x, int y)
{
    int result;
    
    result = 0;
    if (y == 0)
    {
        result += is_u(tetrim_mat, x , y);
        result += is_r(tetrim_mat, x , y);
        result += is_d(tetrim_mat, x , y);
    }
    else
        if (y > 0 && y < 3)
        {
            result += is_u(tetrim_mat, x , y);
            result += is_l(tetrim_mat, x , y);
            result += is_r(tetrim_mat, x , y);
            result += is_d(tetrim_mat, x , y);
        }
        else//    if (y == 3)
        {
            result += is_u(tetrim_mat, x , y);
            result += is_l(tetrim_mat, x , y);
            result += is_d(tetrim_mat, x , y);
        }
/*
		ft_putstr("\n**********************\n\t");
		ft_putstr("x : ");
		ft_putnbr(x);

		ft_putstr("\t y : ");
		ft_putnbr(y);

		ft_putstr("\t\n nbr_relation : ");
		ft_putnbr(result);

//		ft_putstr("\n**********************\n");
*/

    return (result);
}

// x = 3     y = [0 , 3]
int        low_l(char **tetrim_mat, int y)
{
    int result;
    
    result = 0;
    if (y == 0)
    {
        result += is_u(tetrim_mat, 3 , y);
        result += is_r(tetrim_mat, 3 , y);
    }
    else
        if (y > 0 && y < 3)
        {
            result += is_u(tetrim_mat, 3 , y);
            result += is_l(tetrim_mat, 3 , y);
            result += is_r(tetrim_mat, 3 , y);
        }
        else //if (y == 3)
        {
            result += is_u(tetrim_mat, 3 , y);
            result += is_l(tetrim_mat, 3 , y);
        }
/*
		ft_putstr("\n**********************\n\t");
		ft_putstr("x : ");
		ft_putnbr(3);

		ft_putstr("\t y : ");
		ft_putnbr(y);

		ft_putstr("\t\n nbr_relation : ");
		ft_putnbr(result);
*/

	return (result);
}

int		near(char **tetrim_mat, int x, int y)
{
	int nbr_relation;

/*	ft_putstr("x , y");
	ft_putnbr(x);
	ft_putnbr(y);*/
	if (x == 0)
		nbr_relation = upper_l(tetrim_mat, y); // return ();
	else
	{
		if (x > 0 && x < 3)
			nbr_relation = mid_l(tetrim_mat, x, y);
		else
			nbr_relation = low_l(tetrim_mat, y);
	}


	return (nbr_relation);//)((nbr_relation == 6 || nbr_relation == 8) ? 1 : 0);
}

int		check_nbr_relations(char **tetrim_mat)
{
	int nbr_relation;
	int x;
	int y;

	nbr_relation = 0;
	x = 0;
	while (tetrim_mat[x] && nbr_relation > -1)
	{
		y = 0;
		while (tetrim_mat[y] && nbr_relation > -1)
		{
			if (tetrim_mat[x][y] == '#')
			{
				nbr_relation +=  near(tetrim_mat, x, y);
		
				ft_putstr("\n ============================ ");
				ft_putstr("\n nbr_relation totat : ");
				ft_putnbr(nbr_relation);;
			}
			y++;
		}
		x++;
	}
	ft_putstr("\n nbr_relation totat : ");
	return ((nbr_relation == 6 || nbr_relation == 8) ? 1 : 0);
}
