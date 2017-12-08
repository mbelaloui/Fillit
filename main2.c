/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 01:21:24 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/08 11:25:26 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#define BUF_SIZE 4096
#define SIZE_TETRI 20

void	ft_message_error_usage()
{
	ft_putstr("[ERROR] Usage : ./fillit URL_FILE\n");
}

void	ft_message_error_empty_file()
{
	ft_putstr("[ERROR] ; thr file is empty !!!");
}

void	ft_message_error_failure_opening(char *url_file, int fd)
{
	ft_putstr("failed to open the file ");
	ft_putstr(url_file);
	ft_putstr(", error num ;");
	ft_putnbr(fd);
	return;
}

void	ft_message_error_failure_titriminos()
{
	ft_putstr("titriminos defaillant");
}

int		ft_open_file(char *url_file)
{
	int fd;

	ft_putstr(" - reading file... name file : ");
	ft_putstr(url_file);
	ft_putstr("\n");
	fd = open(url_file, O_RDONLY);
	if (fd < 0)
	{
		ft_message_error_failure_opening(url_file, fd);
	}
	return (fd);
}

int		ft_caract_ok(char *buf)
{
	int p;
	int flag;

	flag = 1;
	p = 0;
	while (p < 20)
	{
		if ((buf[p] == '#' || buf[p] == '.' || buf[p % 5] == '\n') && flag == 1)
			continue ;
		else
			flag = 0;
		p++;
	}
	if(flag)
		return (1);
	return (0);
}
/*
void	ft_read_file(int fd)
{
	char	buf[BUF_SIZE];
	int pt;
	int i ;
	int j ;
	while (read(fd, buf, BUF_SIZE))
	{
		pt = 0;
		i = 0;
		j = 0;
		while (buf[pt])
		{
			if (ft_caract_ok(buf))
			{
				ft_putstr(" i =  ");
				ft_putnbr(i);
				ft_putstr(" j = ");
				ft_putnbr(j);
				j++;
				ft_putstr("\t");
					
				if ((j % 5) == 0)
				{
					i++;
					ft_putstr("\n");
					if((i % 4) == 0)
					{
						ft_putstr("\n");
						j++;
					}
				}
			}
			else
			{
				ft_message_error_failure_titriminos();
				return;
			}
			pt++;
		}
//		ft_putnbr(pt);
		ft_putstr("\n\t\t\t**************************\n");
	}
}
*/

int			ft_is_good_len(int len, int *n)
{
	while ((SIZE_TETRI * (*n)) + (1 * ((*n) - 1)) < len)
		(*n)++;
	if ((*n) > 26)
		return (0);
	return (((SIZE_TETRI * (*n)) + (1 * ((*n) - 1)) == len) ? 1 : 0);
}

int		ft_is_char_ok(char c)
{
	return((c == '#' || c == '.' || c == '\n') ?  1 : 0);
}

int		ft_check_chars_file(int fd)
{
	char buf[BUF_SIZE];
	int len;

	len = 0;
/*	while (*/read(fd, buf, BUF_SIZE);
	/*/)
*/		while(buf[len] && ft_is_char_ok(buf[len]))
		{
			ft_putchar(buf[len]);
			len++;
		}
		ft_putstr("\n*******************\n");
		ft_putchar(buf[len]);
	return ((buf[len]) ? -1 : len);
}







/*

int		ft_getconnexion(char **tetrim_mat, int x, int y)
{
	int nbrconnexion;

	nbrconnexion = 0;

	if ((x == 0) || (y == 0)

	return (nbrconnexion);
}
*/






































































int		is_u(char **tetrim_mat, int x, int y)
{
	return ((tetrim_mat[x - 1][y] == '#') ? 1: 0);
}

int		is_l(char **tetrim_mat, int x, int y)
{
	return ((tetrim_mat[x][y - 1] == '#') ? 1: 0);
}

int		is_r(char **tetrim_mat, int x, int y)
{
	return ((tetrim_mat[x][y + 1] == '#') ? 1: 0);
}

int		is_d(char **tetrim_mat, int x, int y)
{
	return ((tetrim_mat[x + 1][y] == '#') ? 1: 0);
}

//x = 0  y = [0 , 3]
int		upper_l(char **tetrim_mat,int y)
{
	int result;

	result = 0;
	if (y == 0)
	{
		result += is_r(tetrim_mat, 0 , y);
		result += is_d(tetrim_mat, 0 , y);
	}
	else
		if (y > 0 && y < 3)
		{
			result += is_l(tetrim_mat, 0 , y);
			result += is_r(tetrim_mat, 0 , y);
			result += is_d(tetrim_mat, 0 , y);
		}
		else//	if (y == 3)
		{
			result += is_l(tetrim_mat, 0 , y);
			result += is_d(tetrim_mat, 0 , y);
		}
	return (result);
}

//x = [1, 2]	y = [0 , 3]
int		mid_l(char **tetrim_mat, int x, int y)
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
		else//	if (y == 3)
		{
			result += is_u(tetrim_mat, x , y);
			result += is_l(tetrim_mat, x , y);
			result += is_d(tetrim_mat, x , y);
		}
	return (result);
}

// x = 3	 y = [0 , 3]
int		low_l(char **tetrim_mat, int y)
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
	return (result);
}

int		near(char **tetrim_mat, int x, int y)
{
	int nbr_relation;

	if(x == 0)
		nbr_relation = upper_l(tetrim_mat, y);
	else
		if(x > 0 && x < 3)
			nbr_relation = mid_l(tetrim_mat, x, y);
		else
			nbr_relation = low_l(tetrim_mat, y);

	return ((nbr_relation == 6 || nbr_relation == 8)?  1: 0);
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
		while(tetrim_mat[y] && nbr_relation > -1)
		{
			if (tetrim_mat[x][y] == '#')
				nbr_relation += near(tetrim_mat, x, y);
			y++;
		}
		x++;
	}
	return ((nbr_relation == 6 || nbr_relation == 8) ? 1 : 0);
}




















int		check_dim_tetrim(char **tetrim_mat)
{
	int x; 
	int y;

	x = 0;
	while (*tetrim_mat && x < 5)
	{
		y = 0;
		while((**tetrim_mat) && y < 5 )
		{
			y++;
			(*tetrim_mat)++;
		}
		if (y != 4)
			return (0);
			x++;
		tetrim_mat++;
	}
	return ((x == 4) ? 1 : 0);
}

int		check_nbr_hashtag(char **tetrim_mat)
{
	int		nbr_hashtag;

	nbr_hashtag = 0;
	while (*tetrim_mat)
	{
		while(**tetrim_mat)
			if( (*(*tetrim_mat)++) == '#') 
				nbr_hashtag++;
		tetrim_mat++;
	}
	ft_putstr("the number of # in tetriminos is : ");
	ft_putnbr(nbr_hashtag);
	return ((nbr_hashtag == 4) ? 1 : 0);
}

int		ft_check_tetrim(char **tetrim_mat)
{
/*	int		elemet[4];
	int		pt;
	int		x;
	int		y;

	pt = 0;
	x = 0;
*/	int result;

	result = check_nbr_hashtag(tetrim_mat) && check_dim_tetrim(tetrim_mat);
		
	//	&& result;

	return (result);
//	return (check_nbr_hashtag(tetrim_mat) && check_dim_tetrim(tetrim_mat) && check_nbr_relations(tetrim_mat));
/*
	while (tetrim_mat[x])
	{
		y = 0;
		while(tetrim_mat[x][y])
		{
			if((tetrim_mat[x][y]) == '#')
			{]
				if(pt > 3 || y > 3 || x > 3)
					return (-1);
				elemet[pt] = ft_getconnexion(tetrim_mat, x , y);
				if(elemet[pt] == 0)
					return (-1);// retourner erruer -1
				pt++;
			}
			y++;
		}
		x++;
	}*/
}






int		ft_remplir_tab(char *tab, char *url_file, int size, int nbr_tetrim)
{
//	char *tab;
//	tab = temp[0];
//	temp[1] = NULL;
	char buf[BUF_SIZE];
//	int len ;
	int fd;
//	len = 0;

	fd = ft_open_file(url_file);
	ft_bzero(buf, BUF_SIZE);
	/*while*/
	read(fd, buf, BUF_SIZE);
	//	while(len < size)
	{
		ft_strlcat(tab, buf, BUF_SIZE);
//			len++;
	}
	ft_putstr("***************************************\n");

	ft_putnbr((nbr_tetrim * 4) + 1);
	char *ta_tempb;
	char **mat;// = (char **)malloc(((nbr_tetrim * 4) + 1) * sizeof(*mat));;
//	if(mat == NULL)
//		return (0);  // colse file et free touce que j'ai puis retourner un message

	int i = 0;
//	int i_mat = 0;
	while (i < size)
	{
		ta_tempb = ft_strcut(tab,0 + i , 19 + i);

		ft_putstr("\n====================\n");

//	
		mat = ft_strsplit(ta_tempb, '\n');
		ft_putmat(mat);

		if (ft_check_tetrim(mat))
		{
			ft_putstr("\n====================\n");
			ft_putnbr(ft_matlen(mat));
			i += 21 ;
		}
		else
		{
			ft_message_error_failure_titriminos();
			return (0) ;
		}
	}
	
	return (1);
//	ft_putstr(tab);
//	ft_putmat(temp);
}

int		main(int argc, char *argv[])
{
	int fd;
	int len;
	char *temp;
	int nbr_tetrim;

	if(argc == 2)
	{
		if((fd = ft_open_file(argv[1])))
		{
			len = ft_check_chars_file(fd);
			if (len > 0)
			{
				ft_putstr("caracters file ok ->\t\n has the file the good size ?  ");
				nbr_tetrim = 1;
				if (ft_is_good_len(len, &nbr_tetrim))
				{
					temp = (char *)malloc((len + 1) * sizeof(temp));
					if (temp == NULL)
						return (0);
					close(fd);

					if(ft_remplir_tab(temp, argv[1], len, nbr_tetrim))
					{
						ft_putstr("\n\n***********************************\n");
						//ft_putstr(temp);
						//
					}
				}
				else
				{
					ft_putstr("\nnot the good size ! ");
				}
			}
			else 
			{
				if (len == 0)
					ft_message_error_empty_file();
				else
					ft_message_error_failure_titriminos();
			}
		}
	}
	else
	{
		ft_message_error_usage();
	}
//	ft_putnbr(getdtablesize());

	return (0);
}
