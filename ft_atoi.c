int	ft_atoi(const char *s)
{
    int n = 0;
    int i = 0;
    int sign = 1;
    while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r') ) {
        i++;
    }
    if (s[i] == '-' || s[i] == '+') {
        if (s[i] == '-') {
            sign = -1;
        }
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9') {
        n = n * 10 + s[i] - '0';
        i++;
    }
    return n * sign;
}
