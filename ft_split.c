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

int count_words(char const *s, char c)
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
}

char* extract_words(char const *s, char c, size_t i)
{
    int len;
    int j;
    
    len = 0;
    j = 0;
    while (s[i + len] != c)
    {
        len++;
    }
    char *str = malloc(len + 1);
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
    size_t word;
    char **strs;

    i = 0;
    wordc = count_words(s, c);
    strs = malloc(wordc);
    while (arri < wordc)
    {
        word = extract_words(s, c, i);
        len = ft_strlen(word);
        strs[arri] = word;
        arri++;
        i += len;
    }
    return  (strs);
}