/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesbos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 19:56:39 by bdesbos           #+#    #+#             */
/*   Updated: 2015/12/21 21:18:57 by bdesbos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_readfile(char *file)
{
	int		fd;
	char	*fl;
	int		ret;

	if ((fd = open(file, O_RDONLY) == -1))
		ft_error();
	if (!(fl = (char*)malloc(sizeof(char) * 546))) 
		ft_error();
	fl[545] = '\0';
	if (!(ret = read(fd, fl, 546)) || fl[545])
	{
		close(fd);
		free(fl);
		ft_error();
	}
	close(fd);
	return (fl);
}
