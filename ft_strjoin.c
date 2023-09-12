#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int len;
	int i;
	int j;

	i = 0;
	j = 0;
	// len = ft_strlen(s1) + ft_strlen(s2);
	len = 0;
	while (s1[len])
		len++;
	while (s2[len])
		len++;
	char *str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s1[j])
	{
		str[i++] = s1[j++];
	}
	j = 0;
	while (s2[j])
	{
		str[i++] = s2[j++];
	}
	str[i] = '\0';
	return (str);
}


// int main(void)
// {
// 		char	s1[] = "lorem ipsum";
// 	char	s2[] = "dolor sit amet";
// 	char *str = ft_strjoin(s1, s2);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }

