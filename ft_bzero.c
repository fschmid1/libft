/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:44:22 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/11 12:06:07 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*cpy;

	cpy = (char *) s;
	i = 0;
	while (i < n)
	{
		cpy[i] = '\0';
		i++;
	}
	s = (void *) cpy;
}
