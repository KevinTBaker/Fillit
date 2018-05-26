/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 17:56:59 by kbaker            #+#    #+#             */
/*   Updated: 2018/03/19 19:09:19 by kbaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int			i;
	long long	nbr;
	int			negative;

	i = 0;
	nbr = 0;
	negative = 1;
	while ((str[i] == 32) || (str[i] == 10) || (str[i] == 9) ||
			(str[i] == 12) || (str[i] == 13) || (str[i] == 11))
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += (int)str[i] - '0';
		i++;
	}
	return (nbr * negative);
}
