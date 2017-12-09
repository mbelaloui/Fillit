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
	ft_putstr("ERROR\n");
}

int		ft_open_file(char *url_file)
{
	int fd;

	fd = open(url_file, O_RDONLY);
	if (fd < 0)
		return (0);
	return (fd);
}

int		ft_is_char_ok(char c)
{
	return((c == '#' || c == '.' || c == '\n') ?  1 : 0);
}


char **ft_getetrim(char *tab, int size)
{
	char **mat;
	char *temp;
	mat = ft_strsplit(ft_strcut(tab, (size * 21), 19 + (size*21)), '\n');
	return (mat);
}


int		ft_check_chars_file(int fd)
{
	char buf[4096];
	int len;
	int nbr_tetrim;
	int i;
	char **mat;

	len = 0;
	read(fd, buf, 4096);
	while(buf[len] && ft_is_char_ok(buf[len]))
		len++;
	nbr_tetrim = 1;
	if (ft_is_good_len(len, &nbr_tetrim))
	{
		i = 0;
		while (i < nbr_tetrim)
		{
			mat = ft_getetrim(buf, i++);
			ft_putstr("***********************************\n");
			ft_putmat(mat);
			if (!ft_check_tetrim(mat))
				return (0);
		}
		if (close(fd))
			return (-1);
		return ((buf[len]) ? 0 : len);
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int fd;
	int len;
	char *temp;

	if(argc == 2 && (fd = ft_open_file(argv[1])))
	{
		temp = NULL;
		len = ft_check_chars_file(fd);
		if (len > 0)
		{
			ft_putstr("\n fin tout les tetrim sont OK \n");
		}
		else 
		{
			ft_message_error();
		}
	}
	else
	{
		ft_message_error_usage();
	}
//	ft_putnbr(getdtablesize());

	return (0);
}
