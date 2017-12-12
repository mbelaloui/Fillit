/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 01:21:24 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/12 12:30:55 by mbelalou         ###   ########.fr       */
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

int		main(int argc, char *argv[])
{
	char	buf[4096];
	int		fd;
	int		nbr_tetrim;
	t_tetri	*lst_tetrim;

	if (argc == 2 && (fd = ft_open_file(argv[1])))
	{
		ft_bzero(buf, 4096);
		nbr_tetrim = ft_check_chars_file(fd, buf);
		lst_tetrim = NULL;
		if (nbr_tetrim && ft_check_file(&lst_tetrim, nbr_tetrim, buf))
		{
			ft_puttetrim(lst_tetrim);
			ft_putstr("fin tout les tetrim sont OK \n");
			ft_putstr("etape de backtraking !!!");
		}
		else
			ft_message_error();
	}
	else
		ft_message_error_usage();//	ft_putnbr(getdtablesize());
	return (0);
}
