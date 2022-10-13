/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:14:17 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/13 14:57:13 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_count_words(char const *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		while (*s == c)
		s++;
		if (*s)
		{
			words++;
			while (*s && *s != c)
				s++;
		}
	}
	return (words);
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			return (i);
		s++;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		k;
	size_t		count;
	size_t		len;
	char		**words;

	i = 0;
	k = 0;
	count = ft_count_words(s, c);
	words = (char **) malloc(sizeof(char *) * (count + 1));
	while (k < count && words)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		len = ft_wordlen(&s[i], c);
		words[k] = malloc(sizeof(char) * (len + 1));
		ft_strlcpy(words[k], &s[i], len + 1);
		while (s[i] != '\0' && s[i] != c)
			i++;
		k++;
	}
	words[k] = 0;
	return (words);
}
