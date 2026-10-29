/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 15:08:25 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/29 17:12:17 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1chr;
	const unsigned char	*s2chr;
	unsigned int	i;

	s1chr = s1;
	s2chr = s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (s1chr[i] != s2chr[i])
			return (s1chr[i] - s2chr[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*str1 = "mystring";
// 	char	*str2 = "mystr8ng";
//
// 	return (ft_memcmp(str1, str2, 8));
// }
