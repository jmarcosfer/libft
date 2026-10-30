/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:35:19 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/30 13:14:44 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last_found;

	c = (char) c;
	last_found = NULL;
	while (*str)
	{
		if (*str == c)
			last_found = (char *)str;
		str++;
	}
	if (*str == c)
		return ((char *)str);
	else if (last_found != NULL)
		return (last_found);
	else
		return (NULL);
}
