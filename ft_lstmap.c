/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:49:50 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/29 16:09:41 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;

	head = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new && del)
			del(lst->content);
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}
