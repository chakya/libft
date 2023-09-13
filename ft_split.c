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

int extract_words(char const *s, char c)
{
    words
}

char **ft_split(char const *s, char c)
{
    size_t i;
    size_t len;

    i = 0;
    len = 0;
}