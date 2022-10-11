/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:36:54 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/11 10:41:23 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *b, int c, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		b[i] = c;
		i++;
	}
	return (b);
}
