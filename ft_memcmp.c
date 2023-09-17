/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:43:39 by cwijaya           #+#    #+#             */
/*   Updated: 2023/09/13 17:43:40 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n && p1[i] == p2[i])
		i++;
	if (i < n)
		return (p1[i] - p2[i]);
	return (0);
}

// #include <unistd.h>

// void	ft_print_result(int n)
// {
// 	if (n > 0)
// 		write(1, "1", 1);
// 	else if (n < 0)
// 		write(1, "-1", 2);
// 	else
// 		write(1, "0", 1);
// }

// int		main(int argc, const char *argv[])
// {

// 		ft_print_result(ft_memcmp("salut", "salut", 5));
// 		ft_print_result(ft_memcmp("t\200", "t\0", 2));
// 		ft_print_result(ft_memcmp("testss", "test", 5));
// 		ft_print_result(ft_memcmp("test", "tEst", 4));
// 		ft_print_result(ft_memcmp("", "test", 4));
// 		ft_print_result(ft_memcmp("test", "", 4));
// 		ft_print_result(ft_memcmp("abcdefghij", "abcdefgxyz", 7));
// 		ft_print_result(ft_memcmp("abcdefgh", "abcdwxyz", 6));
// 		ft_print_result(ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));
// 	return (0);
// }
