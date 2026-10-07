/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:10:52 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/07 16:57:22 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		*end_dest;
	const char	*end_src;

	d = dest;
	s = src;
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		end_dest = d + (n - 1);
		end_src = s + (n - 1);
		while (n--)
			*d-- = *s--;
	}
	return (dest);
}
