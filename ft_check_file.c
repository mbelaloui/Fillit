/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 10:50:12 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/12 11:56:19 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

int		ft_check_file(t_tetri **debut, int nbr_tetrim, char buf[])
{
	int		i;
	char	**mat;
	char	c;
	t_tetri	*list;
	t_tetri	*temp_tetri;

	i = 0;
	c = 'A';
	if (debut == NULL || nbr_tetrim <= 0 || buf == NULL)
		return (0);
	while (i < nbr_tetrim)
	{
		mat = ft_getetrim(buf, i++);
		if ((mat == NULL) && (ft_check_tetrim(mat)))
			return (0);
		if (!(temp_tetri = ft_newtetri(mat, c++)))
			return (0);
		if (!ft_addtetrim(debut, &list, temp_tetri))
			return (0);
	}
	return (1);
}
