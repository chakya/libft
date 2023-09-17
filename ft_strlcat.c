/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:45:30 by cwijaya           #+#    #+#             */
/*   Updated: 2023/09/13 17:45:33 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && i + j + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	while (src[j])
		j++;
	return (i + j);
}

// #include <bsd/string.h>
// #include <stdio.h>
// int main(){
//     char *src = "Hello";
//     char dst[50] = "This is my soup";
//     char dst2[50] = "This is my soup";
//     size_t size = 11;
//     printf("%ld\n", ft_strlcat(dst, src, size));
//     printf("%ld\n", strlcat(dst2, src, size));
//     printf("%s\n", dst);
//     printf("%s\n", dst2);
//     return 0;
// }
