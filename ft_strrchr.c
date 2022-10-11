/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:23:14 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/11 13:39:41 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	 i;
	char *cpy;

	cpy = strdup(s);
	i = ft_strlen(s);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&cpy[i]);
		i--;
	}
	return (NULL);
}