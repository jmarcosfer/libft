/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarcos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:59:21 by jmarcos           #+#    #+#             */
/*   Updated: 2026/10/21 20:06:28 by jmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isupper(int c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	else
		return (1);
}

static int	islower(int c)
{
	if (c < 'a' || c > 'z')
		return (0);
	else
		return (1);
}

int	ft_isalpha(int c)
{
	if (isupper(c) || islower(c))
		return (1);
	else
		return (0);
}
