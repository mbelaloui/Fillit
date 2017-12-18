/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:56:34 by mbelalou          #+#    #+#             */
/*   Updated: 2017/11/30 20:57:15 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ecrire_nb(int nb)
{
	char	r;
	int		q;

	q = nb / 10;
	r = (nb % 10) + 48;
	if (q > 0)
	{
		ecrire_nb(q);
		ft_putchar(r);
	}
	else
		ft_putchar(r);
}

void		ft_putnbr(int nb)
{
	if (nb >= 0)
	{
		ecrire_nb(nb);
	}
	else
	{
		ft_putchar('-');
		if (nb == (-2147483648))
			ft_putstr("2147483648");
		else
		{
			nb = -nb;
			ecrire_nb(nb);
		}
	}
}
