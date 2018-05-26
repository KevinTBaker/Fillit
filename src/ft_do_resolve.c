/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_resolve.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 22:43:06 by kbaker            #+#    #+#             */
/*   Updated: 2018/05/25 22:43:07 by kbaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_make_grid(int size)
{
	char	**tab;
	int		i;
	int		j;

	tab = (char**)malloc(sizeof(char*) * size);
	i = 0;
	while (i < size)
	{
		tab[i] = (char*)malloc(sizeof(char) * (size + 1));
		j = 0;
		while (j < size)
			tab[i][j++] = '.';
		tab[i][j] = '\0';
		i++;
	}
	return (tab);
}

int		ft_get_gridsize(char **grid)
{
	return (ft_strlen(grid[0]));
}

char	**ft_all(t_piece *pieces, int nb_pieces)
{
	char	letter;
	char	**grid;
	int		size;

	letter = 'A';
	size = 2;
	grid = ft_make_grid(size);
	while (ft_resolve(grid, letter, pieces, nb_pieces) != 1)
		grid = ft_make_grid(++size);
	return (grid);
}
