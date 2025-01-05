#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	int j = 0;

	if (!tab || len == 0)
		return (0);
	while (i < len)
	{
		if (j < tab[i])
			j = tab[i];
		i++;
	}
	return (j);
}

int main()
{
	int i[5] = {0, 2, 0, 5};
	printf("%d\n", max(i, 5));
}