/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_p_1.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 20:13:16 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/18 21:01:29 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_P_1_H
# define FILLIT_P_1_H
# include "../Libft/libft.h"

typedef	struct			s_tetriminos
{
	int					*tab_x;
	int					*tab_y;
	char				c;
	struct s_tetriminos	*next;
}						t_tetri;

int						ft_open_file(char *url_file);

int						ft_check_char_file(int fd, char buf[]);
int						ft_is_char_ok(char c);
int						ft_is_file_good_len(int len, int *nbr_tetrim);

int						ft_file_to_tetri(t_tetri **begin, int nbr_tetrim,
						char buf[]);
char					**ft_extract_tetri(char *tab, int index);
int						ft_check_tetri(char **tetri_mat);
int						ft_check_dim_tetri(char **tetri_mat);
int						ft_check_nbr_hashtag(char **tetri_mat);

int						ft_near(char **tetri_mat, int x, int y);
int						ft_is_u(char **tetri_mat, int x, int y);
int						ft_is_l(char **tetri_mat, int x, int y);
int						ft_is_r(char **tetri_mat, int x, int y);
int						ft_is_d(char **tetri_mat, int x, int y);

int						ft_check_nbr_relations(char **tetri_mat);

t_tetri					*ft_newtetri(char **tetri_mat, char c);
int						ft_addtetri(t_tetri **lst, t_tetri *t);
#endif
