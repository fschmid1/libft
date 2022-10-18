/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:04:37 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/18 15:06:39 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	if (!dst && dstsize == 0)
		return (0);
	src_len = ft_strlen((char *) src);
	dst_len = ft_strlen(dst);
	j = dst_len;
	if (dst_len > dstsize)
		return (src_len + dstsize);
	while (src[i] != 0 && dst_len + i + 1 < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = 0;
	return (dst_len + src_len);
}
