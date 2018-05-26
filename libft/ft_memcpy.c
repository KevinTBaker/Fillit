/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 20:27:39 by kbaker            #+#    #+#             */
/*   Updated: 2018/03/20 20:38:02 by kbaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d1;
	char	*sr1;

	if (n == 0 || dst == src)
		return (dst);
	d1 = (char *)dst;
	sr1 = (char *)src;
	while (--n)
		*d1++ = *sr1++;
	*d1 = *sr1;
	return (dst);
}
