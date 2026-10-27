/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:55:35 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/27 17:28:45 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res_start_i;
	char	*res_end_i;
	char	*res;
	char	*res_write;

	res_start_i = (char *)s1;
	res_end_i = (char *)s1 + ft_strlen(s1);
	while (*res_start_i && ft_strchr(set, *res_start_i))
		res_start_i++;
	if (res_start_i < res_end_i)
	{
		while (ft_strchr(set, *res_end_i) && res_end_i > res_start_i)
			res_end_i--;
	}
	res = malloc((res_end_i - res_start_i) + 2);
	if (!res)
		return (NULL);
	res_write = res;
	while (res_start_i <= res_end_i)
		*res_write++ = *res_start_i++;
	*res_write = 0;
	return (res);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	*s = ft_strtrim("", "123");
// 	printf("ft_strtrim result: %s\n", s);
// 	int	l = strlen("");
// 	printf("l: %i, empty str: %s\n", l, "");
// 	char	*testnum = "123";
// 	printf("testnum: %p, ft_strchr: %p\n", testnum, ft_strchr(testnum, '\0'));
// 	printf("testnum: %p, strchr: %p\n", testnum, strchr(testnum, '\0'));
// //	while (*s)
// //		printf("inside s: %c", *s);
// //	int	i = strcmp(s, "");
// //	printf("strcmp says: %i", i);
// 	return (0);
// }
