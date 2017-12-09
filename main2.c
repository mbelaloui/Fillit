/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 01:21:24 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/09 06:16:10 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

void	ft_message_error_usage()
{
	ft_putstr("[ERROR] Usage : ./fillit URL_FILE\n");
}

void	ft_message_error()
{
	ft_putstr("ERROR");
}


int		ft_open_file(char *url_file)
{
	int fd;

	fd = open(url_file, O_RDONLY);
	if (fd < 0)
	{
		ft_message_error();
	}
	return (fd);
}

int		ft_is_char_ok(char c)
{
	return((c == '#' || c == '.' || c == '\n') ?  1 : 0);
}

int		ft_caract_ok(char *buf)
{
	int p;
	int flag;

	flag = 1;
	p = 0;
	while (p < 20)
	{
		if (ft_is_char_ok(buf[p]) && flag == 1)
			continue ;
		else
			flag = 0;
		p++;
	}
	return (flag);
}

int		ft_check_chars_file(int fd, char **tab)
{
	char buf[4096];
	int len;

	len = 0;
	read(fd, buf, 4096);
	while(buf[len] && ft_is_char_ok(buf[len]))
	{
		len++;
	}
	if((*tab = ft_strnew(len)) == NULL)
		return (-1);
	ft_strlcat(*tab, buf, len);
	if (close(fd))
		return (-1);
	return ((buf[len]) ? -1 : len);
}

int		ft_remplir_tab(char *tab, int size, int nbr_tetrim)
{
	char *ta_tempb;
	char **mat;

	int i = 0;
	while (i < size)
	{
		ta_tempb = ft_strcut(tab,0 + i , 19 + i);
		mat = ft_strsplit(ta_tempb, '\n');
		if (ft_check_tetrim(mat))
			i += 21 ;
		else
		{
			ft_message_error();
			return (0) ;
		}
	}
	(void)nbr_tetrim;
	return (1);
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
			temp = NULL;
			len = ft_check_chars_file(fd, &temp);
			if (len > 0)
			{
				nbr_tetrim = 1;
				if (ft_is_good_len(len, &nbr_tetrim))
				{
					if(ft_remplir_tab(temp, len, nbr_tetrim))
					{
						ft_putstr("\n***********************************\n");
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
					ft_message_error();
				else
					ft_message_error();
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
