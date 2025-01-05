#include <unistd.h>
int ft_atoi(char *str)
{
	int sum = 0;

	while (*str)
		sum = sum * 10 + *str++ - '0';
	return (sum);
}

void	put_nbr(int num)
{
	if (num >= 10)
		put_nbr(num / 10);
	char digit = num % 10 + '0';
	write(1, &digit, 1); 
}

int is_prime(int n)
{
	if (n <= 1)
		return (0);
	int i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return(1);
}
int main(int arc, char **arv)
{
	if (arc == 2)
	{
		int nbr = ft_atoi(arv[1]);
		int sum = 0;

		while (nbr > 0)
		{
			if (is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		put_nbr(sum);
	}
	if (arc != 2)
		put_nbr(0);
	write(1, "\n", 1);
}