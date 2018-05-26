/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 18:51:22 by kbaker            #+#    #+#             */
/*   Updated: 2018/03/18 21:26:33 by kbaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_whenblank(int c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char			*ft_strtrim(char const *s)
{
	unsigned int	i;
	size_t			len;
	char			*ret;

	if (!s)
		return (0);
	i = 0;
	while (ft_whenblank(s[i]))
		i++;
	len = ft_strlen(s) - 1;
	while (len > i && ft_whenblank(s[len]))
		len--;
	if (len < i)
		return (ret = ft_strdup(""));
	return (ret = ft_strsub(s, i, len - (size_t)i + 1));
}
