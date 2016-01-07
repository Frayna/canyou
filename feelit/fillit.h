/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesbos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 19:41:54 by bdesbos           #+#    #+#             */
/*   Updated: 2016/01/07 19:55:39 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>

typedef struct	s_bloc
{
	int			d2x;
	int			d2y;
	int			d3x;
	int			d3y;
	int			d4x;
	int			d4y;
	char		letter;
}				t_bloc;

void	ft_error(void);
char	*ft_readfile(char *file);
void	ft_veriffile(char *fl, int i);
int		ft_verifblocs(char *fl);
t_bloc	*ft_stockblocs(char *fl, int n);
void	ft_printsquare(char **square);
char	**ft_resolve(t_bloc *blocs, int nb);


#endif
