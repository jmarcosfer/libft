/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:16:24 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/29 14:25:23 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	if (!*lst)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
}
