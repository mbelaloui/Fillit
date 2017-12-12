/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 01:21:24 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/05 15:23:09 by mbelalou         ###   ########.fr       */
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
	int pt;
	int flag;

	flag = 1;
	pt = 0;
	while (pt < 20)
	{
		if ((buf[pt] == '#') || (buf[pt] == '.') || (buf[pt % 5] == '\n'))
		{
			flag = 1;
		}
		else
		{
			ft_putchar(buf[20]);
			ft_putnbr(pt);
			flag = 0;
		}
		pt++;
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

int			ft_is_good_len(int len)
{
	size_t i;

	i = 1;
	while ((SIZE_TETRI * i) + (1 * (i - 1)) < len)
		i++;

	if (i > 26)
		return (0);
	return (((SIZE_TETRI * i) + (1 * (i - 1)) == len) ? 1 : 0);
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
			len++;
	return ((buf[len]) ? -1 : len);
}

void	ft_remplir_tab(char *tab, char *url_file, int size)
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

	char **mat = (char **)malloc(() * sizeof(*mat));;

	while (tab)
	{
		
	}

//	ft_putstr(tab);
//	ft_putmat(temp);
}

int		main(int argc, char *argv[])
{
	int fd;
	int len;
	char *temp;

	if(argc == 2)
	{
		if((fd = ft_open_file(argv[1])))
		{
			len = ft_check_chars_file(fd);
			if (len > 0)
			{
				ft_putstr(" \tfile ok ->\t hase the file the good size ?  ");
				if (ft_is_good_len(len))
				{
					temp = (char *)malloc((len + 1) * sizeof(temp));
					if (temp == NULL)
						return (0);
					close(fd);
					ft_remplir_tab(temp, argv[1], len);
					ft_putstr("\n\n***********************************\n");
					ft_putstr(temp);
				}
				else
				{
					ft_putstr("pas la bonne taill exit ");
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
