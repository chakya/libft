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

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t slen = 0;
    size_t l = 0;
    size_t i = 0;
    
    while (s[slen])
        slen++;
    while (l < len && start < slen && s[start + l])
        l++;
    char *dup = malloc((l + 1) * sizeof(char));
    if (dup == NULL)
        return NULL;
    while (s[start + i] && i < len && start < slen)
    {
        dup[i] = s[start + i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

// int main(void)
// {
//     char *s = "Hello World!";

//     char *str = "i just want this part #############";
//  	size_t size = 20;
//  	char *ret = ft_substr(str, 5, size);

//  	if (!strncmp(ret, str + 5, size))
//  	{
//  		free(ret);
//  		exit(TEST_SUCCESS);
//  	}
//  	free(ret);
//  	exit(TEST_FAILED);

//     printf("%s\n", sub);
//     free(sub);
//     return (0);
// }
