#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int *arr;
	int i = 0;
	int sing = 1;

	if (end < 0)
		sing = -1;
	while ((start + i) <= (end * sing))
		i++;
	arr = malloc(sizeof(int) * (i + 1));
	if (!arr)
		return (0);
	i = 0;
	while ((start + i) <= end)
	{
		arr[i] = start + i;
		i++;
	}
	while ((start - i) >= end)
	{
		arr[i] = start - i;
		i++;
	}
	return (arr);
}
int main()
{
	int *rang = ft_range(0, -3);
	int i = 0;
	while (i <= 3)
		printf("%d, ", rang[i++]);
}