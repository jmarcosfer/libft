/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:28:19 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/26 15:52:23 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			s1_len;
	size_t			s2_len;
	size_t			total_len;
	unsigned int	i;
	char			*res;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = s1_len + s2_len;
	res = malloc(total_len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < total_len && *s1)
		res[i++] = *s1++;
	while (i < total_len && *s2)
		res[i++] = *s2++;
	res[i] = 0;
	return (res);
}
