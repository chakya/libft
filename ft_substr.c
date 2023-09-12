#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t slen = 0;
    size_t i = 0;
    char *dup = malloc((len + 1) * sizeof(char));
    if (dup == NULL)
        return NULL;
    while (s[slen])
        slen++;
    if (start > slen)
    {
        dup[0] = '\0';
        return (dup);
    }
    while (s[start + i] && i < len)
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
