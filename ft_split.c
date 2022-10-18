/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:14:17 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/18 14:27:39 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_skip(char *s, char c, int word_or_char)
{
	while (*s == c && *s != '\0' && word_or_char == 0)
		s++;
	while (*s != c && *s != '\0' && word_or_char == 1)
		s++;
	return (s);
}

static char	*ft_get_word(char *s, char c)
{
	char	*res;
	int		i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	res = ft_calloc(i + 1, sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

static int	ft_count_words(char *s, char c)
{
	int	i;

	i = 0;
	s = ft_skip(s, c, 0);
	while (*s != '\0')
	{
		s = ft_skip(s, c, 1);
		s = ft_skip(s, c, 0);
		i++;
	}
	return (i);
}

static char	**ft_free(char **res)
{
	int	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	*tmp;
	char	**res;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	res = ft_calloc(ft_count_words((char *) s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	if (ft_strlen(s) == 0)
		return (res);
	tmp = (char *)s;
	tmp = ft_skip(tmp, c, 0);
	while (*tmp != '\0')
	{
		res[i] = ft_get_word(tmp, c);
		if (!res[i])
			return (ft_free(res));
		tmp = ft_skip(tmp, c, 1);
		tmp = ft_skip(tmp, c, 0);
		i++;
	}
	return (res);
}
