/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:42:28 by cwijaya           #+#    #+#             */
/*   Updated: 2023/09/13 17:42:29 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int s)
{
	return ((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z'));
}
