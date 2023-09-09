char *ft_toupper(char *s) {
    while (*s) {
        if (*s >= 'a' && *s <= 'z') {
            *s -= 32;
        }
        s++;
    }
    return (s);
}
