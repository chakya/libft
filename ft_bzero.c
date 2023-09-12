#include <stddef.h>

void ft_bzero(void *s, size_t n) {
    char *p = (char *)s;
    while (n--) {
        *p++ = 0;
    }
}
