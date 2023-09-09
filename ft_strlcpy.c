char* ft_strlcpy(char *dst, char *src, int n) {
    char *p = dst;
    while (*src && n--) {
        *p++ = *src++;
    }
    *p = 0;
    return dst;
}