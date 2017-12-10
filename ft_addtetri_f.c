/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addtetri_f.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 06:48:19 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/10 07:31:26 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

int		ft_addtetri_f(t_tetri *addto, char **toadd)
{
	t_tetri *temp;

	if (toadd == NULL)
		return (0);
	temp = ft_newtetri(toadd);
	if (temp == NULL)
		return (0);
	if (addto == NULL)
		return (ft_addtetri(addto, toadd));
	while (addto->next != NULL)
		addto = addto->next;
	return (ft_addtetri(addto, toadd));
}
