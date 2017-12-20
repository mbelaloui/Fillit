/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 01:03:35 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/16 20:12:51 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

int		ft_open_file(char *url_file)
{
	int fd;

	if (url_file == NULL)
		return (0);
	fd = open(url_file, O_RDONLY);
	if (fd < 0)
		return (0);
	return (fd);
}
