/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lapang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 21:42:57 by lapang            #+#    #+#             */
/*   Updated: 2018/03/27 22:23:29 by lapang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#define BUF_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *s)
{
	int i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("usage: ./fillit valid_tetrimino_input\n");
			return (1);
		}
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	else
		ft_putchar('\n');
	return (0);
}
