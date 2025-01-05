#include <stdio.h>

int ft_char_to_value(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}
int	ft_atoi_base(const char *str, int str_base)
{
	int result;
	int current;
	int sing;

	if (!str || str_base < 2 || str_base > 16)
		return (0);
	result = 0;
	sing = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sing = -1;
		str++;
	}
	while (*str)
	{
		current = ft_char_to_value(*str);
		if (current == -1 || current >= str_base)
			break;
		result = result * str_base + current;
		str++;
	}
	return (result * sing);
}

#include <stdio.h>

int main()
{
	printf("%d\n", ft_atoi_base("1a", 16));
}