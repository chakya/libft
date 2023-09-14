/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:51:49 by cwijaya           #+#    #+#             */
/*   Updated: 2023/09/13 17:51:50 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char *ascii_n;
	int len;

	ascii_n = ft_itoa(n);
	len = ft_strlen(ascii_n);
	write(fd, &ascii_n, len);
}