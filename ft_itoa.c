/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:32:49 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/15 10:32:18 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static	char	*ft_createstr(char *str, long int n, int end, int i)
{
	if (n < 0)
		n *= -1;
	if (n == 0)
		str[0] = '0';
	while (i > end - 1)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	if (end == 1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	int			len;
	int			end;
	long int	nb;

	end = 0;
	nb = (long int) n;
	len = ft_numlen(nb);
	if (n < 0)
	{
		len++;
		end = 1;
	}
	i = len - 1;
	str = (char *) ft_calloc(1, sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	return (ft_createstr(str, nb, end, i));
}
