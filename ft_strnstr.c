#include <stddef.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len) {
    size_t i;
    size_t j;

    i = 0;
    if (*needle == '\0') {
        return (char *)haystack;
    }
    while (haystack[i] && i < len) {
        j = 0;
        while (needle[j] && haystack[i + j] == needle[j] && i + j < len) {
            j++;
        }
        if (needle[j] == '\0')
            return (char *) (haystack + i);
        i++;
    }
    return (0);
}