int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n < 1)
		return (0);
	i = 0;
	while ((*(s1 + i) || *(s2 + i)) && (*(s1 + i) == *(s2 + i)) && i < n - 1)
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}