/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:02:47 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/13 11:41:24 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*src;
	char		*dest;
	size_t		i;
	size_t		k;

	dest = (char *) ft_calloc(1, sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	i = 0;
	if (start < ((unsigned int) ft_strlen((char *) s)))
	{
		src = (char *) s;
		k = start;
		while (src[i + k] != '\0' && i < len)
		{
			dest[i] = src[i + k];
			i++;
		}
	}
	return (dest);
}
