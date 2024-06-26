/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:43:55 by cwijaya           #+#    #+#             */
/*   Updated: 2023/09/13 17:43:57 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	while (d != s && n--)
		*d++ = *s++;
	return (dest);
}

// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>
// int		main(int argc, const char *argv[])
// {
// 	void	*mem;
// 	int		arg;

// 	alarm(5);
// 	if (!(mem = malloc(sizeof(*mem) * 30)) || argc == 1)
// 		return (0);
// 	memset(mem, 'j', 30);
// 	if ((arg = atoi(argv[1])) == 1)
// 	{
// 		if (mem != ft_memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 14))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, mem, 30);
// 	}
// 	else if (arg == 2)
// 	{
// 		if (mem != ft_memcpy(mem, "zyxwvutst", 0))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, mem, 30);
// 	}
// 	else if (arg == 3)
// 	{
// 		if (mem != ft_memcpy(mem, "zy\0xw\0vu\0\0tsr", 11))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, mem, 30);
// 	}
// 	return (0);
// }
