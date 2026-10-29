/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <jmarcos@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 16:20:15 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/28 16:29:13 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*t;
	size_t			s_len;
	unsigned int	i;

	s_len = ft_strlen(s);
	t = malloc(s_len + 1);
	if (!t)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		t[i] = f(i, s[i]);
		i++;
	}
	t[s_len] = 0;
	return (t);
}
