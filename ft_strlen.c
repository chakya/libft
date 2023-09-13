/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:45:47 by cwijaya           #+#    #+#             */
/*   Updated: 2023/09/13 17:45:49 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *s) {
    int len;

    len = 0;
    while (s[len]) {
        len++;
    }
    return len;
}
