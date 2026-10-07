/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 17:23:03 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/07 17:40:29 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	*ft_strcat(char *dst, const char *src, size_t siz)
{
	size_t	min_size;
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	if (siz < dst_len)
		min_size = siz;
	else
		min_size = dst_len;
	while (*dst)
		dst++;
	siz--;
	while (siz--)
		*dst++ = *src++;
	if (siz > ft_strlen(dst))
		*dst = '\0';
	return (ft_strlen(src) + min_size);
}
