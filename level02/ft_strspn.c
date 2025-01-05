#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (!accept[j])
			break;
		j = 0;
		i++;
	}
	return (count);
}

int main() {
    const char *s = "ajbc123";
    const char *charset = "abc";

    size_t result = strspn(s, charset);

    printf("Initial segment length: %zu\n", result); // Output: 5

    return 0;
}
