/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tetri.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 17:43:10 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/11 21:13:15 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TETRI_H
# define LIBFT_TETRI_H
# include "libft/libft.h"

typedef	struct			s_tetriminos
{
	char				**tetriminos;
	char				c;
	int					*tab_x;
	int					*tab_y;
	struct s_tetriminos	*next;
}						t_tetri;

t_tetri					*ft_initetri();
t_tetri					*ft_newtetri(char **tetrim, char c);

int						ft_addtetri(t_tetri *addto, char **toadd);

int						ft_addtetri_f(t_tetri **addto, char **toadd);

void					ft_puttetri(t_tetri *tetrim);
void					ft_puttetrim(t_tetri *tetrim);

int						check_nbr_relations(char **tetrim_mat);

int						ft_is_u(char **tetrim_mat, int x, int y);
int						ft_is_d(char **tetrim_mat, int x, int y);
int						ft_is_l(char **tetrim_mat, int x, int y);
int						ft_is_r(char **tetrim_mat, int x, int y);

int						ft_upper_l(char **tetrim_mat, int y);
int						ft_mid_l(char **tetrim_mat, int x, int y);
int						ft_low_l(char **tetrim_mat, int y);
int						ft_near(char **tetrim_mat, int x, int y);

int						ft_check_nbr_relations(char **tetrim_mat);
int						ft_check_dim_tetrim(char **tetriminos);
int						ft_check_nbr_hashtag(char **tetrim_mat);
int						ft_check_tetrim(char **tetrim_mat);
int						ft_is_file_good_len(int len, int *n);
int						ft_is_char_ok(char c);

int						ft_open_file(char *url_file);
char					**ft_getetrim(char *tab, int size);
int						ft_check_chars_file(int fd, char buf[]);
int						ft_get_dim_mat(int nbr_tetrim);
int						ft_get_x_y(char **tetrim_mat, int tab_x[], int tab_y[]);

#endif
