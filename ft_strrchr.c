/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:35:19 by jmarcos           #+#    #+#             */
/*   Updated: 2026/11/02 17:30:20 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int val)
{
	char	*last_found;

	val = (char) val;
	last_found = NULL;
	while (*src)
	{
		if (*src == val)
			last_found = (char *)src;
		src++;
	}
	if (*src == val)
		return ((char *)src);
	else if (last_found != NULL)
		return (last_found);
	else
		return (NULL);
}
