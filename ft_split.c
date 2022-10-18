/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:14:17 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/18 13:47:18 by fschmid          ###   ########.fr       */
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

static char	**ft_clear(char **words)
{
	int	i;

	i = 0;
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);
	return (NULL);
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
	words = (char **) ft_calloc(count + 1, sizeof(char *));
	while (k < count && words)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		len = ft_wordlen(&s[i], c) + 1;
		words[k] = ft_calloc(len, sizeof(char));
		ft_strlcpy(words[k], &s[i], len);
		i += len - 1;
		k++;
	}
	return (words);
}
