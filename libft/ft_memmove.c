/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 17:11:05 by kbaker            #+#    #+#             */
/*   Updated: 2018/02/28 16:20:32 by kbaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*sr;
	char	*des;

	sr = (char *)src;
	des = (char *)dst;
	if (sr < des)
	{
		while (len--)
			des[len] = sr[len];
	}
	else
		ft_memcpy(des, sr, len);
	return (des);
}
