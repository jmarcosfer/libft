/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <jmarcos@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 17:31:15 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/28 00:19:24 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// ft_strchr, ft_strlen, memmove/memcpy/strlcpy/strlcat
char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*split_ptr;
	char	*sub_s;
	char	**temp_res;
	size_t	temp_res_len;
	char	*trim_s;
	char	sep_str[2] = {c, '\0'};

	trim_s = ft_strtrim(s, sep_str);
	if (!trim_s)
	{
		res = malloc(sizeof(char *));
		*res = NULL;
		return (res);
	}
	split_ptr = ft_strchr(trim_s, c);
	if (!split_ptr || !c)
	{	
		res = malloc(sizeof(char *) * 2);
		if (!res)
			return (NULL);
		res[0] = trim_s;
		res[1] = NULL;
		return (res);
	}
	sub_s  = malloc(split_ptr - trim_s + 1);
	ft_strlcpy(sub_s, trim_s, split_ptr - trim_s + 1);
	temp_res = ft_split(split_ptr+1, c);
	temp_res_len = 0;
	while (*temp_res++)
		temp_res_len++;
	res = malloc(sizeof(char *) * (temp_res_len + 1 + 1));
	if (!res)
		return (NULL);
	*res = sub_s;
	temp_res--;
	res[temp_res_len + 1] = *temp_res--; // temp_res == NULL
	while (temp_res_len > 0) // filling new res from end
		res[temp_res_len--] = *temp_res--;
	free(++temp_res);
	return (res);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	**tab = ft_split("  tripouille  42  ", ' ');
// 	while (*tab)
// 	{
// 		printf("next tab item: %s\n", *tab);
// 		tab++;
// 	}
// 	return (0);
// }
