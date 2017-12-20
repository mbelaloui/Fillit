/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 19:48:09 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/20 17:52:19 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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
	char	buf[1024];
	int		fd;
	int		nbr_tetrim;
	t_tetri	*lst_tetrim;
	char	**mat_result;

	if (argc == 2 && (fd = ft_open_file(argv[1])))
	{
		ft_bzero(buf, 1024);
		lst_tetrim = NULL;
		if ((nbr_tetrim = ft_check_char_file(fd, buf)) &&
				(ft_file_to_tetri(&lst_tetrim, nbr_tetrim, buf)))
		{
			mat_result = ft_backtracking_fillit(lst_tetrim, nbr_tetrim);
			ft_putmat(mat_result);
		}
		else
		{
			ft_message_error();
		}
	}
	else
		ft_message_error_usage();
	return (0);
}
