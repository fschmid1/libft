/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:24:58 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/19 09:11:27 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		k;
	int		size;

	if (!s1 || !s2)
		return (NULL);
	size = (ft_strlen((char *) s1) + ft_strlen((char *) s2) + 2);
	dest = (char *) ft_calloc(1, sizeof(char) * size);
	if (!dest)
		return (NULL);
	i = 0;
	k = 0;
	while (((char *) s1)[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	while (((char *) s2)[k] != '\0')
	{
		dest[i + k] = s2[k];
		k++;
	}
	return (dest);
}
