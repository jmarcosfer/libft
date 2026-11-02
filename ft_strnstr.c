/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <jmarcos@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:33:15 by jmarcos           #+#    #+#             */
/*   Updated: 2026/11/02 15:28:55 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	max_i;
	size_t	big_little_diff;
	size_t	little_len;
	char	*last_i;

	if (!*little)
		return ((char *)big);
	little_len = ft_strlen(little);
	if (!*big || !len || len < little_len)
		return (NULL);
	big_little_diff = ft_strlen(big) - little_len;
	if (little_len == 1)
		return (ft_strchr(big, *little));
	max_i = len - little_len;
	if (max_i > big_little_diff)
		max_i = big_little_diff;
	last_i = (char *) &big[max_i];
	while (big <= last_i)
	{
		if (!ft_strncmp(big, little, little_len))
			return ((char *)big);
		big++;
	}
	return (NULL);
}

// #include <stdint.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	s[] = "aaabcabcd";
// 	char	*res = ft_strnstr(s, "aabc", -1);
// 	printf("res: %p\n", res);
// //	size_t	test_size = -1;
// //	printf("test_size: %zu\n", test_size);
// //	int	itest_size = SIZE_MAX;
// //	printf("itest_size: %i\n", itest_size);
// //	int	not_test_size = !test_size;
// //	printf("not test size: %i\n", not_test_size);
// 	return (0);
// }
