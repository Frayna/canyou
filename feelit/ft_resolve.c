/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesbos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 15:56:33 by bdesbos           #+#    #+#             */
/*   Updated: 2016/01/07 22:38:31 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_defsizeminsq(int nb)
{
	int		tmc;

	tmc = ft_sqrt(nb * 4);
	if (tmc * tmc != nb * 4)
		tmc++;
	return (tmc);
}

char	**ft_make_sq(int edge)
{
	char **ette;
	int i;

	i = 0;
	if ((!(ette = (char **)ft_memalloc(sizeof(char *) * edge + 1))))
		ft_error();
	while (i < edge)
	{
		if ((!(ette[i] = ft_strnew(edge))))
			ft_error();
		i++;
	}
	ette[i] = NULL;
	return (ette);
}

void	ft_free_sq(char **sq)
{
	while (sq)
	{
		free(*sq);
		sq++;
	}
	free(sq);
}

void	ft_place_bloc(int x, int y, char **ette, t_bloc *bloc)
{
	ette[y][x] = bloc->letter;
	ette[y + bloc->d2y][x + bloc->d2x] = bloc->letter;
	ette[y + bloc->d3y][x + bloc->d3x] = bloc->letter;
	ette[y + bloc->d4y][x + bloc->d4x] = bloc->letter;
}

void	ft_del_bloc(int x, int y, char **ette, t_bloc *bloc)
{
	ette[y][x] = '.';
	ette[y + bloc->d2y][x + bloc->d2x] = '.';
	ette[y + bloc->d3y][x + bloc->d3x] = '.';
	ette[y + bloc->d4y][x + bloc->d4x] = '.';
}

int		ft_check_bloc(int x, int y, char **ette, t_bloc *bloc)
{
	if (ette[y][x] == '.' && ette[y + bloc->d2y][x + bloc->d2x] == '.' &&
			ette[y + bloc->d3y][x + bloc->d3x] == '.' &&
			ette[y + bloc->d4y][x + bloc->d4x] == '.')
		return (1);
	return (0);
}

int		ft_isok(t_bloc *blocs, char **sqf, int i)
{
	
}

char	**ft_resolve(t_bloc *blocs, int nb)
{
	char	**sqf;
	int		tc;

	tc = ft_defsizeminsq(nb);
	sqf = ft_make_sq(tc);
	while (!(ft_isok(blocs, sqf, 0)))
	{
		ft_free_sq(sqf);
		sqf = ft_make_sq(tc);
		tc++;
	}
	return(sqf);
}
