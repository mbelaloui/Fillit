/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tetri.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 17:43:10 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/08 12:22:06 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TETRI_H
# define LIBFT_TETRI_H
# include "libft/libft.h"

typedef	struct			s_tetriminos
{
	char				**tetriminos;
	struct s_tetriminos	*next;
}						t_tetri;

t_tetri					*ft_newtetri(char **tetrim);
int						ft_addtetri(t_tetri *addto, char **toadd);
void					ft_puttetri(t_tetri *tetrim);
int						check_nbr_relations(char **tetrim_mat);

#endif
