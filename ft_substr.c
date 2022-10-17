/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:02:47 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/17 08:36:44 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*src;
	char		*dest;
	size_t		i;
	size_t		k;

	s += start;
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	dest = (char *) ft_calloc(len + 1, sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	src = (char *) s;
	k = 0;
	while (src[i + k] != '\0' && i < len)
	{
		dest[i] = src[i + k];
		i++;
	}
	return (dest);
}
