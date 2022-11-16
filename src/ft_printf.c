/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:49:57 by fschmid           #+#    #+#             */
/*   Updated: 2022/11/16 15:01:52 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print(char flag, va_list args)
{
	if (flag == 's')
		return (ft_pstr(va_arg(args, char *), 1));
	if (flag == 'd' || flag == 'i')
		return (ft_pstr(ft_itoa(va_arg(args, int)), 0));
	if (flag == 'u')
		return (ft_pstr(ft_ltoa(va_arg(args, unsigned int)), 0));
	if (flag == 'c')
		return (ft_print_char(va_arg(args, int)));
	if (flag == '%')
		return (ft_print_char('%'));
	if (flag == 'x')
		return (ft_pstr(ft_itoa_base(va_arg(args, unsigned int), 1), 0));
	if (flag == 'X')
		return (ft_pstr(ft_itoa_base(va_arg(args, unsigned int), 0), 0));
	if (flag == 'p')
		return (ft_pstr(ft_ptoa((unsigned long) va_arg(args, void *)), 0));
	return (0);
}

int	ft_vprintf(const char *str, va_list	args, int *count)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0' && ft_is_flag(str[i + 1]))
		{
			*count += ft_print(str[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			*count += 1;
		}
		i++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		res;

	res = 0;
	va_start (args, format);
	ft_vprintf(format, args, &res);
	va_end (args);
	return (res);
}
