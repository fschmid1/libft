/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:50:14 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/11 12:08:11 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	int		*cpy;
	int		*src_cpy;
	int 	*old;

	i = 0;
	cpy = (char *) dst;
	src_cpy = (char *) src;
	while (src_cpy[i] != '\0' && i < len)
	{
		
	}
		
}