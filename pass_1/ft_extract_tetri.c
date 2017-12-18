/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getetrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 01:06:37 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/18 15:05:05 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit_p_1.h"

char	**ft_extract_tetri(char *tab, int index)
{
	if (tab == NULL || index < 0)
		return (NULL);
	return (ft_strsplit(ft_strcut(tab, (index * 21), 19 + (index * 21)), '\n'));
}
