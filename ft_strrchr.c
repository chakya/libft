char *ft_strrchr(char *s, int c) {
    char *p = (void *)0;
    while (*s) {
        if (*s == c) {
            p = s;
        }
        s++;
    }
    return p;
}