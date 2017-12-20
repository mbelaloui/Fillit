/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matligneput.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 13:50:42 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/18 21:02:45 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putmat(char **mat)
{
	int i;

	if (mat == NULL)
	{
		ft_putstr(NULL);
		return ;
	}
	i = 0;
	while (mat[i])
	{
		ft_putstr(mat[i]);
		ft_putstr("\n");
		i++;
	}
}
