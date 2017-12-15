/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_backtracking.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 13:28:55 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/15 12:46:54 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

char	**init_mat_ressult(int dim_mat_result)
{
	char **mat_result;
	int i;

	i = 0;
	if (dim_mat_result < 2 )
		return (0);
	mat_result = (char **)malloc((dim_mat_result + 1) * sizeof(mat_result));
	if (*mat_result == NULL)
		return (0);
	while (i < dim_mat_result)
	{
		mat_result[i] = ft_strnew(dim_mat_result);
		if (mat_result[i] == NULL)
			return (0);
		ft_memset(mat_result[i],'.' ,dim_mat_result);
		i++;
	}
	mat_result[i] = NULL;
	return (mat_result);
}

int		ft_is_possible(char **mat, t_tetri *t, int dim_mat, int x, int y)
{
	int pt;

	if (!mat || !t || dim_mat < 2 || x < 0 || x > dim_mat || y < 0 ||
			y > dim_mat)
		return (0);
	pt = 0;
	while(pt < 4)
	{// les x ne sont jamais < 0
		if (/*x + t->tab_x[pt] < 0 ||*/ x + t->tab_x[pt] >= dim_mat)
			return (0);
		if (y + t->tab_y[pt] < 0 || y + t->tab_y[pt] >= dim_mat)
			return (0);
		if (mat[x + t->tab_x[pt]][y + t->tab_y[pt]] != '.')
				return (0);
		pt++;
	}
	return (1);
}

int	ft_put_tetrim_mat(char ***mat_result, t_tetri *t, int dim_mat_result, int x, int y)
{
	int pt;

/*	if(t->next == NULL)
		ft_putmat(*mat_result);
*/
	x = 0;
	while (x < dim_mat_result && t)
	{
		y = 0;
		while (y < dim_mat_result && t)
		{
/*			ft_putstr(" x : ");
			ft_putnbr(x);
			ft_putstr(", y : ");
			ft_putnbr(y);
			ft_putstr("\nessey de poser tetrim ");
			ft_puttetrim(t);
*/
			if (ft_is_possible(*mat_result, t, dim_mat_result, x, y))
			{
				pt = 0;
				while (pt < 4)
				{
					(*mat_result)[x + t->tab_x[pt]][y + t->tab_y[pt]] = t->c;
					pt++;
				}
				ft_putstr("posee\n");
				ft_putmat(*mat_result);
				t = t->next;
			}/*
			else
			{
				ft_putstr("\npas possible .. \n");
			}*/
			y++;
		}
		x++;
	}
	if (t == NULL)
	{
		return (1);
		ft_putmat(*mat_result);
	}
	else
	{
		ft_putstr("dim pas suffisante ...");
		return (0);
	}
}






int		main(int argc, char** argv)
{
	(void)argc;
	if (argc != 2)
	{
		ft_putstr("[ERROR] Usage : ./pass2 nbr_tetrim\n");
		return (0);
	}
	char **mat_result;
	int nbr_tetrim = ft_atoi(argv[1]);
	int dim_mat_result = ft_get_dim_mat(nbr_tetrim);

	int *tab_x;
	int *tab_y;

	tab_x = malloc(sizeof(tab_x) * 4);
	tab_y = malloc(sizeof(tab_y) * 4);


	int *tab_x2;
	int *tab_y2;

	tab_x2 = malloc(sizeof(tab_x2) * 4);
	tab_y2 = malloc(sizeof(tab_y2) * 4);

	if (tab_x == NULL || tab_y == NULL || tab_x2 == NULL || tab_y2 == NULL)
		return (0);
//construction map
	ft_putstr("le nbr de tetrim = ");
	ft_putnbr(nbr_tetrim);
	ft_putstr("\n");

	mat_result = NULL;
	mat_result = init_mat_ressult(dim_mat_result);

	ft_putstr("\n************************************\n");

	if (mat_result == NULL)
	{
		ft_putstr("dimention invalide");
		return (0);
	}
	else
		ft_putmat(mat_result);




// init tetri 
	tab_x[0] = 0;
	tab_x[1] = 0;
	tab_x[2] = 1;
	tab_x[3] = 1;
	
	tab_y[0] = 0;
	tab_y[1] = 1;
	tab_y[2] = 0;
	tab_y[3] = 1;

	t_tetri *t = (t_tetri *) malloc(sizeof(t_tetri));
	if (t == NULL)
		return (0);

	t->tab_x = (int *)malloc(4 * sizeof(t->tab_x));
	t->tab_y = (int *)malloc(4 * sizeof(t->tab_y));
	if (t->tab_x == NULL || t->tab_y == NULL)
		return (0);

	t->tab_x = tab_x;
	t->tab_y = tab_y;
	t->c = 'A';
	t->next = NULL;

/*********************************************************/

	tab_x2[0] = 0;
	tab_x2[1] = 0;
	tab_x2[2] = 0;
	tab_x2[3] = 0;
	
	tab_y2[0] = 0;
	tab_y2[1] = 1;
	tab_y2[2] = 2;
	tab_y2[3] = 3;

	t_tetri *t2 = (t_tetri *) malloc(sizeof(t_tetri));
	if (t2 == NULL)
		return (0);

	t2->tab_x = (int *)malloc(4 * sizeof(t2->tab_x));
	t2->tab_y = (int *)malloc(4 * sizeof(t2->tab_y));
	if (t2->tab_x == NULL || t2->tab_y == NULL)
		return (0);

	t2->tab_x = tab_x2;
	t2->tab_y = tab_y2;
	t2->c = 'B';
	t2->next = NULL;

	t->next = t2;

	ft_putstr("\n************************************\n");

	ft_puttetrim(t);

	ft_putstr("\n************************************\n");



//put tetri dans la map
	while(!ft_put_tetrim_mat(&mat_result, t, dim_mat_result, 0,0))
	{
		free(mat_result);
		dim_mat_result++;
		mat_result = init_mat_ressult(dim_mat_result);

	}
//	ft_put_tetrim_mat(&mat_result, t2, dim_mat_result, 0,2);

	(void)dim_mat_result;

	ft_putstr("\n************************************\n");

	return (0);
}




























