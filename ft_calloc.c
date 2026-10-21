/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:56:58 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/21 19:58:04 by jmarcos          ###   ########.fr       */
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

	if (check_mult_overflow(nmemb, size))
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total_size = nmemb * size;
	return (malloc(total_size));
}
