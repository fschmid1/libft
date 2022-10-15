/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:18:52 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/15 12:12:59 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (*(char *)s != '\0' && i < n)
	{
		if (*(char *)s == c)
			break ;
		s++;
		i++;
	}
	if (*(char *)s == c)
		return ((void *)s);
	return (NULL);
}
