/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:24:13 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/30 14:56:03 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	c = (char) c;

	if ((c >= '\t' && c <= '\r') || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr != '\0')
	{
		if (ft_isdigit(*nptr))
			res = res * 10 + (*nptr - '0');
		else
			break ;
		nptr++;
	}
	return (res * sign);
}

// #include <stdlib.h>
// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	(void)	argc;
// 	char	*test_str = argv[1];
// 	int	testres = ft_atoi((const char *)test_str);
// 	int	origres = atoi((const char *)test_str);
// 
// 	printf("testres: %i, origres: %i", testres, origres);
// 	return (0);
// }
