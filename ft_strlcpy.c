/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 17:00:14 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/29 16:31:44 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (siz == 0)
		return (src_len);
	while ((i < siz - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (siz > 0)
		dst[i] = '\0';
	return (src_len);
}
