/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:47:27 by cwijaya           #+#    #+#             */
/*   Updated: 2023/09/13 17:47:30 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int s) {
        if (s >= 'a' && s <= 'z')
            return (s - 32);
        return (s);
}
