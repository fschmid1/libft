/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:17:52 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/11 11:46:30 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdbool.h>

bool	ft_isalpha(int c);

bool	ft_isdigit(int c);

bool	ft_isalnum(int c);

bool	ft_isascii(int c);

bool	ft_isprint(int c);

int		ft_strlen(char *str);

void	*ft_memset(void *b, int c, int len);

void	*ft_bzero(void *s, int n);
#endif