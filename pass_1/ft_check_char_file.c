/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_char_file.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 01:43:39 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/18 17:27:53 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit_p_1.h"

int		ft_check_char_file(int fd, char buf[])
{
	int len;
	int nbr_tetrim;

	if (fd <= 0 || buf == NULL)
		return (-1);
	len = 0;
	read(fd, buf, 1024);
	while (buf[len] && ft_is_char_ok(buf[len]))
		len++;
	if (close(fd))
		return (-1);
	nbr_tetrim = 1;
	if (!ft_is_file_good_len(len, &nbr_tetrim))
		return (0);
	return ((buf[len]) ? 0 : nbr_tetrim);
}
