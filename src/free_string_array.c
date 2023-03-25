/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_string_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:22:15 by fschmid           #+#    #+#             */
/*   Updated: 2023/01/02 14:34:10 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_string_array(char **arr)
{
	int	i;

	i = -1;
	if (!arr)
		return (NULL);
	while (arr[++i] != NULL)
		free(arr[i]);
	free(arr);
}
