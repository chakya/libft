void ft_isalpha(char *s) {
    while (*s) {
        if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z')) {
            s++;
        } else {
            break;
        }
    }
}