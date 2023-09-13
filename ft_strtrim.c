/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:46:23 by cwijaya           #+#    #+#             */
/*   Updated: 2023/09/13 17:46:25 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char in_set(char const *set, char c){
	int	i;

	i = 0;
	while(set[i])
	{
		if (set[i] ==  c)
			return c;
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;
	size_t i;
	char *str;

	start = 0;
	while (s1[start] && in_set(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while(end > start && in_set(set, s1[end - 1]))
		end--;
	str = malloc(end - start + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start + i < end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
