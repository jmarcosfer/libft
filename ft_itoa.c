/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <jmarcos@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:22:08 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/28 19:25:05 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	dtoa(int i)
{
	char	unit;
	int		mod;

	mod = i % 10;
	if (i < 0)
		mod *= -1;
	unit = mod + '0';
	return (unit);
}

static size_t	int_size(int i)
{
	size_t	n;

	n = 1;
	if (i < 0)
	{
		n++;
		while (i <= -10)
		{
			n++;
			i /= 10;
		}
		return (n);
	}
	while (i >= 10)
	{
		n++;
		i /= 10;
	}
	return (n);
}

char	*ft_itoa(int n)
{
	size_t	n_len;
	char	*result;

	n_len = int_size(n);
	result = malloc(n_len + 1);
	if (!result)
		return (NULL);
	if (n < 0)
		*result = '-';
	result[n_len] = '\0';
	if (n == 0)
		result[0] = dtoa(0);
	while (n_len > 0 && n != 0)
	{
		result[--n_len] = dtoa(n % 10);
		n /= 10;
	}
	return (result);
}
