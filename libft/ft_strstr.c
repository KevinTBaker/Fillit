/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 16:26:02 by kbaker            #+#    #+#             */
/*   Updated: 2018/03/19 21:36:05 by kbaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *big, char *little)
{
	size_t	size;

	size = ft_strlen(little);
	if (!little || *little == 0)
		return (big);
	if (size == 0)
		return (little);
	while (*big)
	{
		if (ft_strncmp(big, little, size) == 0)
			return (big);
		big++;
	}
	return (NULL);
}
