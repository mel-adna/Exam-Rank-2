#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i = 0;
	char *str;

	while (src[i])
		i++;
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return(str);
}
