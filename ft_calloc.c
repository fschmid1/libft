/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:37:55 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/18 13:48:08 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*memory;

	if (size && num > SIZE_MAX / size)
		return (NULL);
	memory = (char *) malloc(num * size);
	if (!memory)
		return (NULL);
	ft_memset(memory, 0, num * size);
	return (memory);
}
