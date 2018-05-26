/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_pieces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 22:42:38 by kbaker            #+#    #+#             */
/*   Updated: 2018/05/25 22:42:45 by kbaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_errors(char *str_piece)
{
	if (ft_check_shape(str_piece) || ft_check_dothash(str_piece) ||
		ft_check_nb_hash(str_piece) || ft_match_invalid(str_piece) ||
		ft_match_invalid2(str_piece) || ft_match_pieces(str_piece))
	{
		ft_putendl("error");
		exit(1);
	}
	return (0);
}

int		ft_check_nl(char nl)
{
	if (nl != '\n')
	{
		ft_putendl("error");
		exit(1);
	}
	return (0);
}

char	*ft_get_pieces(char *filename)
{
	int		fd;
	int		ret;
	char	buf[21];
	char	*pieces;

	pieces = "";
	ret = 0;
	fd = open(filename, O_RDONLY);
	while ((ret = read(fd, buf, 20)))
	{
		buf[ret] = '\0';
		if (ft_check_errors(buf))
			return ("");
		pieces = ft_strjoin(pieces, buf);
		if ((ret = read(fd, buf, 1)))
		{
			buf[ret] = '\0';
			if (ft_check_nl(*buf))
				return ("");
			pieces = ft_strjoin(pieces, buf);
		}
	}
	close(fd);
	return (pieces);
}
