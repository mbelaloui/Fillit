/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:45:13 by mbelalou          #+#    #+#             */
/*   Updated: 2017/12/01 20:13:09 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *temp, char c)
{
	size_t	dim;
	char	**resultat;
	char	*str;
	int		id_mot;

	if (temp == NULL)
		return (NULL);
	str = (char *)temp;
	dim = ft_comptword(str, c);
	resultat = (char **)malloc(sizeof(*resultat) * (dim + 1));
	if (resultat == NULL)
		return (NULL);
	id_mot = 0;
	while (id_mot < (int)dim)
	{
		resultat[id_mot] = ft_getword(str, id_mot, c);
		id_mot++;
	}
	resultat[id_mot] = NULL;
	return (resultat);
}
