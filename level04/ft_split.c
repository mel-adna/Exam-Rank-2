#include <stdio.h>

char	*ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;

	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}
char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int cw = 0;

	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i])
			cw++;
		while (str[i] && str[i] != ' ' || str[i] != '\t' || str[i] != '\n')
			i++;
	}
	char **split = (char **)malloc(sizeof(char *) * (cw + 1));
	if (**split)
		return (NULL);
	i = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		j = i;
		while (str[i] && str[i] != ' ' || str[i] != '\t' || str[i] != '\n')
			i++;
		if (i > j)
		{
			split[k] = (char *)malloc(i - j + 1);
			ft_strncpy(split[k++], &str[j], i - j);
		}
	}
	split[k] = NULL;
}