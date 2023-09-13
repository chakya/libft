/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:43:21 by cwijaya           #+#    #+#             */
/*   Updated: 2023/09/13 17:43:22 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n) {
    unsigned char *p = (unsigned char *)s;
    while (n--) {
        if (*p == (unsigned char)c) {
            return p;
        }
        p++;
    }
    return (void *)0;
}
