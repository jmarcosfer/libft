/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:39:15 by jmarcos           #+#    #+#             */
/*   Updated: 2026/11/02 12:07:56 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c > 127 || c < 0)
		return (0);
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	i = 1000;
// 	int	j = 256;
// 	i = (unsigned char) i;
// 	j = (unsigned char) j;
// 	printf("cast numbers i and j: %d, %d", i, j);
// 	return (0);
// }
