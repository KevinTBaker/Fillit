/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 18:11:42 by kbaker            #+#    #+#             */
/*   Updated: 2018/03/20 22:15:29 by kbaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*des;
	const unsigned char		*sr;
	size_t					i;

	i = 0;
	sr = (const unsigned char *)src;
	des = (unsigned char *)dst;
	while (n > i)
	{
		des[i] = sr[i];
		if (sr[i] == (unsigned char)c)
			return ((void*)(des + i + 1));
		i++;
	}
	return (NULL);
}
