/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:46:28 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/14 10:31:55 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	str = (char *) ft_calloc(1, sizeof(char) * ft_strlen((char *) s) + 1);
	if (!str)
		return (0);
	i = 0;
	while ((char) s[i] != 0)
	{
		str[i] = f(i, (char) s[i]);
		i++;
	}
	return (str);
}
