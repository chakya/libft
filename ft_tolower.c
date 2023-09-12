int ft_tolower(int s) {
        if (s >= 'A' && s <= 'Z')
            return (s + 32);
        return (s);
}
