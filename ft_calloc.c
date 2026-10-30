/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:56:58 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/30 14:20:19 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_mult_overflow(unsigned int num1, unsigned int num2)
{
	if (num1 > UINT_MAX / num2 || num2 > UINT_MAX / num1)
		return (1);
	else
		return (0);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*res;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (check_mult_overflow(nmemb, size))
		return (NULL);
	total_size = nmemb * size;
	res = malloc(total_size);
	if (!res)
		return (NULL);
	ft_memset(res, 0, total_size);
	return (res);
}
