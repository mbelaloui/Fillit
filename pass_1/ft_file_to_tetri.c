/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 10:50:12 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/18 19:05:06 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit_p_1.h"

int		ft_file_to_tetri(t_tetri **begin, int nbr_tetrim, char buf[])
{
	int		i;
	char	**mat;
	char	c;
	t_tetri	*list;
	t_tetri	*temp_tetri;

	list = NULL;
	i = 0;
	c = 'A';
	if (nbr_tetrim <= 0 || buf == NULL)
		return (0);
	while (i < nbr_tetrim)
	{
		mat = ft_extract_tetri(buf, i++);
		if (!ft_check_tetri(mat))
			return (0);
		if (!(temp_tetri = ft_newtetri(mat, c++)))
			return (0);
		if (!ft_addtetri(&list, temp_tetri))
			return (0);
		if (*begin == NULL)
			*begin = list;
	}
	return (1);
}
