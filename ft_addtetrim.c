/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addtetrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 10:51:40 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/12 12:36:19 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

int		ft_addtetrim(t_tetri **debut, t_tetri **list, t_tetri *temp)
{
	if (list == NULL || temp == NULL)
		return (0);
	if (*debut == NULL)
	{
		*list = temp;
		*debut = *list;
	}
	else
	{
		(*list)->next = temp;
		*list = (*list)->next;
	}
	return (1);
}
