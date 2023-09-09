void *ft_memset(void *s, int c, int n) {
    char *p = s;
    while (n--) {
        *p++ = c;
    }
    return s;
}