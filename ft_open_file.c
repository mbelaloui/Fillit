/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 01:03:35 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/10 01:05:11 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

int		ft_open_file(char *url_file)
{
	int fd;

	fd = open(url_file, O_RDONLY);
	if (fd < 0)
		return (0);
	return (fd);
}
