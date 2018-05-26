/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:07:51 by kbaker            #+#    #+#             */
/*   Updated: 2018/03/20 20:44:07 by kbaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_place_words(char const *s, char c, int *index)
{
	int		i;
	char	*word;
	int		start;

	i = 0;
	while (s[*index] == c && s[*index])
		(*index)++;
	start = *index;
	while (s[*index] != c && s[*index])
		(*index)++;
	if (!(word = ft_strnew(*index - start)))
		return (NULL);
	while (start < *index)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**sentence;
	int		i;
	int		count;
	int		k;

	k = 0;
	count = 0;
	i = 0;
	if (!s || !c)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	i = 0;
	sentence = (char **)malloc((count + 1) * sizeof(char *));
	if (!sentence)
		return (NULL);
	while (i < count)
		sentence[i++] = ft_place_words(s, c, &k);
	sentence[i] = 0;
	return (sentence);
}
