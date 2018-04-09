/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 14:41:12 by kbaker            #+#    #+#             */
/*   Updated: 2018/03/31 14:49:00 by kbaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(int argc, char **argv)
{
	char	*tetremino;
	char	**solving;

	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (0);
	}
	tetremino = ft_get_tetremino(argv[i]);
	solving = fillit(tetremino);
	ft_print_array(solution);
	return (0);
}
