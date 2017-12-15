/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 01:21:24 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/15 19:33:24 by mbelalou         ###   ########.fr       */
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
	char	**mat_result;

	if (argc == 2 && (fd = ft_open_file(argv[1])))
	{
		ft_bzero(buf, 4096);
		nbr_tetrim = ft_check_chars_file(fd, buf);
		lst_tetrim = NULL;
		if (nbr_tetrim && ft_check_file(&lst_tetrim, nbr_tetrim, buf))
		{
			mat_result = ft_backtracking_fillit(lst_tetrim, nbr_tetrim);
			ft_putmat(mat_result);
		}
		else
			ft_message_error();
	}
	else
		ft_message_error_usage();
	return (0);
}
