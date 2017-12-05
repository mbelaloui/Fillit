/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testestruct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 17:00:02 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/05 18:59:02 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"

typedef struct s_tetriminos
{
	char *tetriminos[5];
	struct s_tetriminos *next;
}				t_tetri;

int		main()
{

	t_tetri *test;

	char test_0[5] = "0...\0";
	char test_1[5] = "1...\0";
	char test_2[5] = "2...\0";
	char test_3[5] = "3...\0";


	test->tetriminos[0] = test_0;
	test->tetriminos[1] = test_1;
	test->tetriminos[2] = test_2;
	test->tetriminos[3] = test_3;

	test->tetriminos[4] = NULL;



	ft_putmat(test->tetriminos);

	return (0);
}
