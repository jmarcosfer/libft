/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:25:39 by jmarcos           #+#    #+#             */
/*   Updated: 2026/11/02 17:29:24 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int val)
{
	val = (char)val;
	while (*src && *src != val)
		src++;
	if (*src == val)
		return ((char *)src);
	else
		return (NULL);
}
