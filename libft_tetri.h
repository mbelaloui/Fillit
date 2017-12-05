/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tetri.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 17:43:10 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/05 18:59:08 by mbelalou         ###   ########.fr       */
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

int						ft_addtetri(t_tetri *addto, char **toadd);
void					ft_puttetri(t_tetri *tetrims);

#endif
