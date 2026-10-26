/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 13:36:14 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/26 14:57:45 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	char	*sub_s_cpy;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		sub_s = malloc(1);
		*sub_s = 0;
		return (sub_s);
	}
	if (s_len - start < len)
		len = s_len - start;
	sub_s = malloc(len + 1);
	if (!sub_s)
		return (NULL);
	sub_s_cpy = sub_s;
	while (s[start] && len)
	{
		*sub_s_cpy++ = s[start++];
		len--;
	}
	*sub_s_cpy = 0;
	return (sub_s);
}
