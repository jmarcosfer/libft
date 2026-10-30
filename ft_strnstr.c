/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <jmarcos@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:33:15 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/30 14:13:04 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	last_i;
	size_t	needle_len;

	if (!*needle)
		return ((char *)haystack);
	if (!*haystack || !len)
		return (NULL);
	needle_len = ft_strlen(needle);
	if (needle_len == 1)
		return (ft_strchr(haystack, *needle));
	last_i = 1 + ft_strlen(haystack) - needle_len;
	if (len - 1 < last_i)
		last_i = len - 1;
	while (last_i-- > 0)
	{
		if (!ft_strncmp(haystack, needle, needle_len))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
