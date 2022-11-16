/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:02:47 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/19 09:13:04 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strnlen(const char *str, size_t n)
{
	const char	*ptr;

	ptr = str;
	while (*ptr && n)
	{
		ptr++;
		n--;
	}
	return (ptr - str);
}

char	*ft_substr(char const *str, unsigned int start, size_t n)
{
	size_t	length;
	char	*new_str;

	if (!str)
		return (NULL);
	length = ft_strlen(str);
	if (length < start)
		start = length;
	str += start;
	n = strnlen(str, n);
	new_str = (char *) ft_calloc(n + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, str, n);
	return (new_str);
}
