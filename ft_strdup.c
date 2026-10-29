/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 13:14:14 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/21 13:35:36 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	s_size;
	char	*ptr;

	s_size = ft_strlen(s) + 1;
	ptr = malloc(s_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_strlcpy(ptr, s, s_size);
		return (ptr);
	}
}
