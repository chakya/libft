char *ft_tolower(char *s) {
    char *p = s;
    while (*p) {
        if (*p >= 'A' && *p <= 'Z') {
            *p += 'a' - 'A';
        }
        p++;
    }
    return s;
}