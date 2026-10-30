/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 17:23:03 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/30 12:34:50 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	min_size;
	size_t	dst_len;
	size_t	src_len;
	unsigned int	i;

	if (siz == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (siz < dst_len)
		min_size = siz;
	else
		min_size = dst_len;
	i = 0;
	while (dst[i] && i < siz - 1)
		i++;
	while (*src && i < siz - 1)
		dst[i++] = *src++;
	if (siz > ft_strlen(dst))
		dst[i] = '\0';
	return (src_len + min_size);
}
