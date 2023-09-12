#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t len = 0;
    size_t i = 0;

    while (s[len])
        len++;
    char *dup = malloc((len + 1) * sizeof(char));
    if (dup == NULL)
        return NULL;
    while (s[i])
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}