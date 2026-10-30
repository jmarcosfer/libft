/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:47:42 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/30 13:30:07 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	a;
	unsigned char	b;

	if (n == 0)
		return (0);
	while (*s1 && *s2)
	{
		a = (unsigned char) *s1;
		b = (unsigned char) *s2;
		if (a != b)
			return (a - b);
		n--;
		if (n == 0)
			break ;
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
