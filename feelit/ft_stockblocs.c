/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stockblocs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesbos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 12:25:48 by bdesbos           #+#    #+#             */
/*   Updated: 2016/01/07 21:12:29 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_bloc	*ft_stockblocs(char *fl, int n)
{
	t_bloc	*blocs;
	int		i;
	int		k;
	int		d;

	i = 0;
	k = 0;
	if (!(blocs = (t_bloc*)malloc(sizeof(t_bloc) * n)))
		ft_error();
	while (k < n)
	{
		while (fl[i] != '#')
			i++;
		d = i++;
		blocs[k].letter = 'A' + k;
		while (fl[i] != '#')
			i++;
		blocs[k].d2x = ((i - d) % 5);
		blocs[k].d2y = ((i++ - d) / 5);
		while (fl[i] != '#')
			i++;
		blocs[k].d3x = ((i - d) % 5);
		blocs[k].d3y = ((i++ - d) / 5);
		while (fl[i] != '#')
			i++;
		blocs[k].d4x = ((i - d) % 5);
		blocs[k++].d4y = ((i++ - d) / 5);
	}
	return (blocs);
}
