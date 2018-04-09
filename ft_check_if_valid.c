/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_valid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 13:58:16 by kbaker            #+#    #+#             */
/*   Updated: 2018/04/09 15:52:55 by kbaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* each time the counter hits a hash the number of neighbors increases. We should have a total of six neighbors.*/
static int	ft_count_neighbor(char *map, int i)
{
	int		n;

	n = 0;
	if (map[i - 1] == '#')
		n++;
	if (map[i - 5] == '#')
		n++;
	if (map[i + 1] == '#')
		n++;
	if (map[i + 5] == '#')
		n++;
	return (n);
}

static int	ft_check_chars(t_char)
{
	if (count->hash < 4)
		return (1);
	if (((count->hash % 4) != 0) || ((count->dot % 4) != 0) 
			|| (count->newline + 1) % 5 != 0)
		return (1);
	else
		return (0);
}

/* As the function name states ft_count_chars counts the different chars that will be in our map */

static t_char ft_count_chars(char *str, int i)
{
	t_char		*count;
	
	count = (t_char*)malloc(sizeof(t_char));
	count->hash = 0;
	count->dot = 0;
	count->newline = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
			count->hash++;
		if (str[i] == '.')
			count->dot++;
		if (str[i] == '\n')
			count->newline++;
		i++;
	}
	return (count);
}

		
int			main_check(char *str)
{
	t_char 		*count;
	int			i;
	int			tet;

	i = 0;
	tet = 0;
	count = ft_count_chars(str, i);
	if (ft_check_char(count))
		return (1);
	tet = 
	if (ft_check_colrow(str, tet))
		return (1);
	return (0);
}
