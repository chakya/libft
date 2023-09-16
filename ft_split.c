/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:44:32 by cwijaya           #+#    #+#             */
/*   Updated: 2023/09/13 17:44:33 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void free_arr(char **strs, size_t len)
{
    size_t i;

    i = 0;
    while (i < len)
    {
        free(strs[i]);
        i++;
    }
    free(strs);
}

size_t count_words(char const *s, char c)
{
    int flag;
    int count;
    size_t i;

    flag = 0;
    count = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            flag = 0;
        }
        else if (!flag)
        {
            flag = 1;
            count++;
        }
        i++;
    }
    return count;
}

static char* get_words(char const *s, char c, size_t i)
{
    int len;
    int j;
    
    len = 0;
    j = 0;
    while (s[i + len] && s[i + len] != c)
    {
        len++;
    }
    char *str = malloc(len + 1);
    if (!str)
        return (NULL);
    while (j < len)
    {
        str[j] = s[i + j];
        j++;
    }
    str[j] = '\0';
    return (str);
}

char **ft_split(char const *s, char c)
{
    size_t i;
    size_t arri;
    size_t len;
    size_t wordc;
    char *word;
    char **strs;

    i = 0;
    arri = 0;
    wordc = count_words(s, c);
    strs = malloc((wordc + 1) * sizeof(char *));
    if (!strs)
        return (NULL);
    while (arri < wordc)
    {
        while (s[i] == c)
            i++;
        word = get_words(s, c, i);
        if (!word)
        {
            free_arr(strs, arri);
            return (NULL);
        }
        strs[arri] = word;
        arri++;
        len = ft_strlen(word);
        i += len + 1;
    }
    strs[arri] = NULL;
    return  (strs);
}

// int main()
// {
//     char * splitme = strdup("Tripouille");
// 	char **strs = ft_split(splitme, ' ');
//     // char **strs =ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
//     while (*strs)
//     {
//         printf("%p %p, %s\n", strs, *strs, *strs);
//         strs++;
//     }
    
//     return (0);
// }