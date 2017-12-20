/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addtetrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 10:51:40 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/18 18:37:11 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit_p_1.h"

int		ft_addtetri(t_tetri **list, t_tetri *temp)
{
	if (list == NULL || temp == NULL)
		return (0);
	if (*list == NULL)
	{
		*list = temp;
	}
	else
	{
		(*list)->next = temp;
		*list = (*list)->next;
	}
	return (1);
}
