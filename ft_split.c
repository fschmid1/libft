/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:14:17 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/17 14:49:44 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


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

// static char	**ft_clear(char **words)
// {
// 	int	i;

// 	i = 0;
// 	while (words[i])
// 	{
// 		free(words[i]);
// 		i++;
// 	}
// 	free(words);
// 	return (NULL);
// }

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
		printf("upper loop\n");
		while (s[i] != '\0' && s[i] == c)
			i++;
		len = ft_wordlen(&s[i], c) + 1;
		words[k] = ft_calloc(len, sizeof(char));
		printf("after  calloc\n");
		// if (!words[k])
		// 	return (ft_clear(words));
		ft_strlcpy(words[k], &s[i], len);
		while (s[i] != '\0' && s[i] != c)
		{
			printf("removeing	\n");
			i++;
		}
		k++;
	}
	return (words);
}



// int main() {
// 	printf("%d\n", (int) ft_wordlen("abc", 1));
// 	printf("%d\n", (int) ft_count_words("abc", 1));
// 	char **splits = ft_split("abc", 1);
// 	for (int i = 0; i < 2; i++)
// 	{
// 		printf("%s\n", splits[i]);
// 	}
// 	return (0);
// }
