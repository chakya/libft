void ft_trlcat(char *dst, char *src, int n) {
    while (*dst) {
        dst++;
    }
    while (n--) {
        if (!(*dst++ = *src++)) {
            return;
        }
    }
    *dst = 0;
}