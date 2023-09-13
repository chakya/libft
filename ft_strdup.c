/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:45:04 by cwijaya           #+#    #+#             */
/*   Updated: 2023/09/13 17:45:05 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t len = 0;
    size_t i = 0;

    while (s[len])
        len++;
    char *dup = malloc((len + 1) * sizeof(char));
    if (dup == NULL)
        return NULL;
    while (s[i])
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
