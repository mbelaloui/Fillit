/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 01:21:24 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/10 20:25:07 by mbelalou         ###   ########.fr       */
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

t_tetri		*ft_check_file(int nbr_tetrim, char buf[])
{
	int		i;
	char	**mat;
	t_tetri	*list;
	char	c;
	t_tetri *debut;

	i = 0;
	list = NULL;//ft_initetri();
	debut = list;
	c = 'A';
	while (i < nbr_tetrim)
	{
		mat = ft_getetrim(buf, i++);
		if (!ft_check_tetrim(mat))
			return (NULL);
		ft_addtetri_f(&list, mat);
		if (debut == NULL)
			debut = list;
		ft_putchar(c++);
	}
	return (debut);
}

int		main(int argc, char *argv[])
{
	char	buf[4096];
	int		fd;
	int		nbr_tetrim;
	t_tetri	*lst_tetrim;

	if (argc == 2 && (fd = ft_open_file(argv[1])))
	{
		nbr_tetrim = ft_check_chars_file(fd, buf);
		if (nbr_tetrim && (lst_tetrim = ft_check_file(nbr_tetrim, buf)))
		{
			ft_puttetrim(lst_tetrim);
			ft_putstr("\nfin tout les tetrim sont OK \n");
		}
		else
			ft_message_error();
	}
	else
		ft_message_error_usage();//	ft_putnbr(getdtablesize());
	return (0);
}
