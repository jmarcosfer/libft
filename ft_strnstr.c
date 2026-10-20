/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <jmarcos@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:33:15 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/20 13:20:13 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	last_i;

	last_i = ft_strlen(haystack) - ft_strlen(needle);
	if (!*needle)
		return (haystack);
	if (len < last_i)
		last_i = len;
	while (last_i--)
	{
		if (!ft_strncmp(haystack, needle, ft_strlen(needle)))
			return (haystack);
		haystack++;
	}
	return (NULL);
}
