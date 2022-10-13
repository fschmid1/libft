/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:02:47 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/13 10:51:42 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*src;
	char		*dest;
	size_t		i;
	size_t		k;

	src = (char *) s;
	dest = (char *) malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	i = 0;
	k = start;
	while (src[i + k] != '\0' && i < len)
	{
		dest[i] = src[i + k];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
