/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 15:08:25 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/08 15:22:06 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1chr;
	const unsigned char	*s2chr;

	s1chr = s1;
	s2chr = s2;
	if (n == 0)
		return (0);
	while (n)
	{	
		if (*s1chr != *s2chr)
		{
			s1chr++;
			s2chr++;
		}
		n--;
	}
	if (
