/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 16:09:14 by kbaker            #+#    #+#             */
/*   Updated: 2018/03/16 21:55:21 by kbaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t len)
{
	unsigned long	i;
	int				x;

	i = 0;
	x = 0;
	if (!*little)
		return ((char *)big);
	while (big[i])
	{
		x = 0;
		while (big[i] == little[x] && big[i] && i < len)
		{
			i++;
			x++;
		}
		if (!little[x])
			return ((char *)&big[i - x]);
		i = (i - x) + 1;
	}
	return (NULL);
}
