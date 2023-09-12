#include <stddef.h>

size_t ft_strlcpy(char *dst, const char *src, size_t n) {
    size_t i = 0;
    while (src[i] && i + 1 < n) {
        dst[i] = src[i];
        i++;
    }
    if (n > 0) {
        dst[i] = '\0';
    }
    while (src[i]) {
        i++;
    }
    return i;
}
