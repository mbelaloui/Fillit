/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matligneput.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 13:50:42 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/07 15:02:43 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putmat(char **mat)
{
	int i;

	if (mat == NULL)
	{
		ft_putstr("NULL\n");
		return ;
	}
	i = 0;
	while (*mat)
	{
		ft_putstr(*(mat++));
		ft_putstr("\n");
	}
}
