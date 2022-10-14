/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:28:28 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/14 16:53:33 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*first;

	if (!f || !del)
		return (0);
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
			return (0);
		if (!tmp)
		{
			tmp = new;
			first = new;
		}
		else
		{
			tmp->next = new;
			tmp = new;
		}
		lst = lst->next;
	}
	ft_lstclear(&lst, del);
	ft_lstdelone(tmp, del);
	ft_lstdelone(new, del);
	return (first);
}
