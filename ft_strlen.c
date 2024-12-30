int	ft_strlen(char *str)
{
	int count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}