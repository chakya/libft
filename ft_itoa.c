/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:50:21 by cwijaya           #+#    #+#             */
/*   Updated: 2023/09/13 17:50:23 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_len(int n)
{
	int len;

	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
}

char *ft_itoa(int n)
{
	char *ascii_n;
	size_t nlen;
	size_t i;

	nlen = count_len(n);
	i = nlen;
	ascii_n = malloc(nlen + 1);
	if (n < 0)
	{
		n = -n;
		ascii_n[0] = '-';
	}
	while (i > 0 && n)
	{
		ascii_n[i - 1] = (n % 10) + '0';
		n /= 10;
	}
	return (ascii_n);
}