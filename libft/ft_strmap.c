/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 19:34:06 by kbaker            #+#    #+#             */
/*   Updated: 2018/03/19 19:21:56 by kbaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	int		i;

	if (!s || !f)
		return (NULL);
	ret = (char*)malloc(sizeof(*ret) * (ft_strlen(s) + 1));
	if (ret)
	{
		i = 0;
		while (s[i])
		{
			ret[i] = f(s[i]);
			i++;
		}
		ret[i] = '\0';
	}
	return (ret);
}
