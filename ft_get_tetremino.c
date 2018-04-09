/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_tetremino.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 14:58:59 by kbaker            #+#    #+#             */
/*   Updated: 2018/04/06 19:16:22 by kbaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

char		*ft_get_tetremino(char *filename)
{
	char	*tetremino;
	char	*buff;
	int		fd;
	int		ret;
	int		sizech;

	sizech = 22;
	fd = open(filename, O_RDONLY);
	tetremino = ft_strnew(21);
	while ((ret = read(fd, buff, 21)))
	{
		ft_strcat(tetremino, buff);
		sizech += 21;
		tetremino = ft_str_attach(tetremino, sizech);
		ft_memset(temp, 0, 21);
	}
	if (ft_check_validity(tetremino))
	{
		ft_putstr("error\n");
		exit(1);
	}
	return (tetremino);
}

static int	check_validity(char *str)
{
	int		len;

	len = ft_strlen(str);
	if (varify_char(str))
		return (1);
	if (main_workin(str))
		return (1);
	if (hash_check(str))
		return (1);
	else
		return (0);
}

static int	varify_char(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '#' && str[i] != '.' && str[i] != '\n')
			return (1);
		i++;
	}
	return (0);
}

static char	ft_str_attach(void *ptr, size_t size)
{
	void	*newptr;
	size_t	old_size;

	newptr = (char*)malloc(sizeof(char) * size);
	ft_memset(newptr, 0, size);
	old_size = ft_strlen(ptr);
	ft_memcpy(newptr, ptr, old_size);
	free(ptr);
	return (newptr);
}
