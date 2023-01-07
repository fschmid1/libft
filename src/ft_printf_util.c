/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:05:12 by fschmid           #+#    #+#             */
/*   Updated: 2023/01/07 14:40:31 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_digit(unsigned long n, int base)
{
	size_t	ans;

	if (n <= 0)
		ans = 1;
	else
		ans = 0;
	while (n)
	{
		ans++;
		n /= base;
	}
	return (ans);
}

char	*ft_strprefix(char *prefix, char *str)
{
	char	*res;

	res = ft_strjoin(prefix, str);
	free(str);
	return (res);
}

char	*ft_ptoa(long n)
{
	char	*d;

	d = ft_itoa_base(n, 1);
	return (ft_strprefix("0x", d));
}

char	*ft_itoa_base(unsigned long n, int lower)
{
	size_t		len;
	char		*itoa;
	char		*base;

	if (lower == 1)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	len = ft_count_digit(n, 16);
	itoa = ft_calloc(len + 1, sizeof(char));
	if (!itoa)
		return (NULL);
	if (n == 0)
		itoa[0] = '0';
	while (len-- && n)
	{
		itoa[len] = base[n % 16];
		n /= 16;
	}
	return (itoa);
}
