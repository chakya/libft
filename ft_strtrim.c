
char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	int k;
	int len;
	char *str;

	i = 0;
	j = 0;
	k = 0;
	len = 0;
	while (s1[len])
		len++;
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s1[i] && set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	while (s1[i])
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}
