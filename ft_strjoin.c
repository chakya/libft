/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:45:24 by cwijaya           #+#    #+#             */
/*   Updated: 2023/09/13 17:45:25 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int len1;
	int len2;
	int i;
	int j;

	i = 0;
	j = 0;
	// len = ft_strlen(s1) + ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = 0;
	len2 = 0;
	while (s1[len1])
		len1++; 
	while (s2[len2])
		len2++;
	char *str = malloc((len1 + len2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s1[j])
	{
		str[i++] = s1[j++];
	}
	j = 0;
	while (s2[j])
	{
		str[i++] = s2[j++];
	}
	str[i] = '\0';
	return (str);
}


// int main(void)
// {
// 		char	s1[] = "lorem ipsum";
// 	char	s2[] = "dolor sit amet";
// 	char *str = ft_strjoin(s1, s2);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }

