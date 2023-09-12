#include <stddef.h>

void *ft_memmove(void *dst, const void *src, size_t n) {
    unsigned char *d = (unsigned char *)dst;
    unsigned char *s = (unsigned char *)src;
    if (d < s) {
        while (d != s && n--) {
            *d++ = *s++;
        }
    } else {
        d += n;
        s += n;
        while (d != s && n--) {
            *--d = *--s;
        }
    }
    return (dst);
}
