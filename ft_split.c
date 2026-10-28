/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <jmarcos@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 17:31:15 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/28 14:43:52 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**create_arr(size_t size)
{
	char	**arr;

	arr = malloc(sizeof(char *) * size + 1);
	if (!arr)
		return (NULL);
	arr[size] = NULL;
	return (arr);
}

static char	**single_item_arr(char *item)
{
	char	**arr;

	arr = create_arr(1);
	if (!arr)
		return (NULL);
	*arr = item;
	return (arr);
}

static size_t	arr_len(char **arr)
{
	size_t	len;

	len = 0;
	while (*arr++)
		len++;
	return (len);
}

static char	**arr_prepend(char **old_arr, char *new_item)
{
	char	**new_arr;
	size_t	old_arr_len;
	unsigned int	i;

	old_arr_len = arr_len(old_arr);
	new_arr = create_arr(old_arr_len + 1);
	if (!new_arr)
		return (NULL);
	*new_arr = new_item;
	i = 0;
	while (i < old_arr_len)
	{
		new_arr[i + 1] = old_arr[i];
		i++;
	}
	free(old_arr);
	return (new_arr);
}

char	**ft_split(char const *s, char c)
{
	char	*split_ptr;
	char	*sub_s;
	char	**temp_res;
	char	*trim_s;
	char	sep_str[2] = {c, '\0'};

	trim_s = ft_strtrim(s, sep_str);
	if (!*trim_s)
	{
		free(trim_s);
		return (create_arr(0));
	}
	split_ptr = ft_strchr(trim_s, c);
	if (!split_ptr || !c)
		return (single_item_arr(trim_s));
	sub_s  = malloc(split_ptr - trim_s + 1);
	if (!sub_s)
		return (NULL);
	ft_strlcpy(sub_s, trim_s, split_ptr - trim_s + 1);
	temp_res = ft_split(split_ptr+1, c);
	free(trim_s);
	return (arr_prepend(temp_res, sub_s));
}

// #include <stdio.h>
// int	main(void)
// {
// 	//char	**tab = ft_split("  tripouille  42  ", ' ');
// 	char	**tab_2 = ft_split("     ", ' ');
// 	while (*tab_2)
// 	{
// 		printf("next tab item: %s\n", *tab_2);
// 		tab_2++;
// 	}
// 	return (0);
// }
