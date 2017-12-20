/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_p_2.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 19:29:35 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/18 19:54:55 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_P_2_H
# define FILLIT_P_2_H
# include "../fillit.h"

typedef	struct	s_point
{
	int			x;
	int			y;
}				t_point;

int				ft_put_tetri_mat(char ***mat, t_tetri *t, int dim_mat);
char			**ft_backtracking_fillit(t_tetri *lst_tetri, int nbr_tetri);
#endif
