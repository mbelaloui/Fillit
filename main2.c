/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 01:21:24 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/10 02:11:27 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

void	ft_message_error_usage(void)
{
	ft_putstr("[ERROR] Usage : ./fillit URL_FILE\n");
}

void	ft_message_error(void)
{
	ft_putstr("error\n");
}

int		ft_check_file(int nbr_tetrim, char buf[])
{
	int		i;
	char	**mat;

	i = 0;
	while (i < nbr_tetrim)
	{
		mat = ft_getetrim(buf, i++);
		if (!ft_check_tetrim(mat))
			return (0);

	}
	return (1);
}

int		main(int argc, char *argv[])
{
	char	buf[4096];
	int		fd;
	int		nbr_tetrim;

	if (argc == 2 && (fd = ft_open_file(argv[1])))
	{
		nbr_tetrim  = ft_check_chars_file(fd, buf);
		if (nbr_tetrim && ft_check_file(nbr_tetrim, buf))
			ft_putstr("fin tout les tetrim sont OK \n");
		else
			ft_message_error();
	}
	else
		ft_message_error_usage();//	ft_putnbr(getdtablesize());
	return (0);
}
