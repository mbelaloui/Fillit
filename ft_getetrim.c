/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getetrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 01:06:37 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/12 11:52:55 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tetri.h"

char	**ft_getetrim(char *tab, int index)
{
	if (tab == NULL || index < 0)
		return (NULL);
	return (ft_strsplit(ft_strcut(tab, (index * 21), 19 + (index * 21)), '\n'));
}
