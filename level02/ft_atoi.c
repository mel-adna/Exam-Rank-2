int	ft_atoi(const char *str)
{
	int i = 0;
	int sum = 0;
	int sing = 1;

	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sing *= -1;
	i++;
	while (str[i] || (str[i] >= '0' && str[i] <= '9'))
	{
		sum = sum * 10 + (str[i] - '0');
		i++;
	}
	return (sum * sing);
}
