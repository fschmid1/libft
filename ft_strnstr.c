/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:48:55 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/17 08:05:07 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *str, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*str == '\0' || str == 0)
		return ((char *) src);
	while (src[i] != '\0' && i < len)
	{
		j = 0;
		while (str[j] == src[i + j] && i + j < len)
		{
			if (str[j + 1] == '\0')
			{
				return ((char *) src + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
