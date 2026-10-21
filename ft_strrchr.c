/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:35:19 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/21 16:35:11 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*last_found;

	while (*str)
	{
		if (*str == c)
			last_found = (char *)str;
		str++;
	}
	if (*str == c)
		return ((char *)str);
	else if (*last_found)
		return (last_found);
	else
		return (NULL);
}
