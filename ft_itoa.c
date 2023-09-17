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
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ascii_n;
	size_t	nlen;
	size_t	i;
	int		nb;

	nlen = count_len(n);
	i = nlen;
	ascii_n = malloc(nlen + 1);
	if (!ascii_n)
		return (NULL);
	ascii_n[nlen] = '\0';
	if (n < 0)
		ascii_n[0] = '-';
	else if (n == 0)
		ascii_n[0] = '0';
	while (i && n)
	{
		nb = n % 10;
		if (nb < 0)
			nb = -nb;
		ascii_n[i - 1] = (nb) + '0';
		n /= 10;
		i--;
	}
	return (ascii_n);
}

// int main()
// {
// 	int n = 0;
// 	char *str = ft_itoa(n);
// 	printf("%s\n", str);
// 	return 0;
// }
