void ft_bzero(void *s, int n) {
    char *p = s;
    while (n--) {
        *p++ = 0;
    }
}