#include <unistd.h>
void	ft_wnbr(int nbr)
{
	char str[10] = "0123456789";

	if (nbr > 9)
		ft_wnbr(nbr / 10);
	write(1, &str[nbr % 10], 1);
}
int main(int arc, char *arv[])
{
	if (arc == 1)
	{
		int i = 1;
		while (i <= 100)
		{
			if (i % (3 * 5) == 0)
				write(1, "fizzbuzz", 8);
			else if (i % 5 == 0)
				write(1, "buzz", 4);
			else if (i % 3 == 0)
				write(1, "fizz", 4);
			else
				ft_wnbr(i);
			write(1, "\n", 1);
			i++;
		}
	}

}