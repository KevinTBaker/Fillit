/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 22:43:28 by kbaker            #+#    #+#             */
/*   Updated: 2018/05/25 22:43:30 by kbaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	char	*str_pieces;
	t_piece	*tab;
	char	**grid;
	int		nb_pieces;

	if (ac == 2)
	{
		str_pieces = ft_get_pieces(av[1]);
		ft_isempty(str_pieces);
		ft_check_last_nl(str_pieces);
		nb_pieces = ft_count_pieces(str_pieces);
		tab = ft_stock_pieces(str_pieces, nb_pieces);
		grid = ft_all(tab, nb_pieces);
		ft_print_grid(grid);
	}
	else
		ft_putendl("usage: ./fillit target_file");
	return (0);
}
