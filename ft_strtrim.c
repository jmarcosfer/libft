/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:55:35 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/26 17:21:53 by jmarcos          ###   ########.fr       */
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
	while (ft_strchr(set, *res_start_i))
		res_start_i++;
	if (res_start_i < res_end_i)
	{
		while (ft_strchr(set, *res_end_i) && res_end_i >= res_start_i)
			res_end_i--;
	}
	res = malloc((res_end_i - res_start_i) + 1);
	if (!res)
		return (NULL);
	res_write = res;
	while (res_start_i < res_end_i)
		*res_write++ = *res_start_i++;
	*res_write = 0;
	return (res);
}


