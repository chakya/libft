/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:38:37 by cwijaya           #+#    #+#             */
/*   Updated: 2023/09/12 20:38:38 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	l;
	size_t	i;
	char	*dup;

	slen = 0;
	l = 0;
	i = 0;
	slen = ft_strlen(s);
	while (l < len && start < slen && s[start + l])
		l++;
	dup = malloc((l + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (start < slen && s[start + i] && i < len)
	{
		dup[i] = s[start + i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
