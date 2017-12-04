/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matligneput.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 13:50:42 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/23 19:16:55 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putmat(char **mat)
{
	int i;

	if (mat == NULL)
	{
		ft_putstr("\n");
		ft_putstr(NULL);
		return ;
	}
	i = 0;
	while (mat[i])
	{
		ft_putstr("\n ");
		ft_putstr(mat[i]);
		i++;
	}
}
