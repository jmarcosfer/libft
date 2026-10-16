/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <jmarcos@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:33:15 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/16 14:48:06 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static	int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
        while (*s1 && *s2 && n)
        {
                if (*s1 != *s2)
                        return (*s1 - *s2);
                n--;
                if (n == 0)
                        break ;
                s1++;
                s2++;
        }
        return (*s1 - *s2);
}

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

