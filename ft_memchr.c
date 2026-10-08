/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:12:24 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/08 15:07:17 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*schr;
	unsigned char		chr;

	schr = s;
	chr = c;
	while ((*schr != chr) && n--)
		schr++;
	if (*schr == chr)
		return ((void *)schr);
	else
		return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	mystr[12] = "hello world";
	char	c = 'l';

	char	*res_ft = ft_memchr(mystr, c, 6);
	char	*res_org = memchr(mystr, c, 6);

	if (res_ft == NULL)
		printf("ft func did not find match\n");
	else
		printf("ft func found match for %c at %p\n", c, res_ft);
	if (res_org == NULL)
		printf("org func did not find match\n");
	else
		printf("org func found match for %c at %p\n", c, res_org);
	return (0);
}*/
