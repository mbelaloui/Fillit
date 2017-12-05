/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addtetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 18:12:38 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/05 18:38:57 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

int		ft_addtetri(t_tetri *addto, char **toadd)
{
	t_tetri *temp;

	if (addto == NULL || toadd == NULL)
		return (0);
	temp = (t_tetri *)malloc(sizeof(temp));
	if (temp == NULL)
		return (0);
	temp->tetriminos = toadd;
	temp->next = NULL;
	addto->next = temp;
}
