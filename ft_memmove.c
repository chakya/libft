/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:44:16 by cwijaya           #+#    #+#             */
/*   Updated: 2023/09/13 17:44:16 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d < s)
	{
		while (d != s && n--)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (d != s && n--)
			*--d = *--s;
	}
	return (dst);
}
