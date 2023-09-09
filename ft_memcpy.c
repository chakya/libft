void ft_memcpy(void *dest, void *src, int n) {
    char *d = dest;
    char *s = src;
    while (n--) {
        *d++ = *s++;
    }
}