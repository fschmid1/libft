/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:42:00 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/15 12:06:27 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s1c;
	char	*s2c;

	i = 0;
	s1c = (char *) s1;
	s2c = (char *) s2;
	if (n == 0)
		return (0);
	while (s1c[i] == s2c[i] && i < n - 1)
		i++;
	return ((unsigned char)s1c[i] - (unsigned char)s2c[i]);
}
