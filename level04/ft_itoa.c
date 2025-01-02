#include <stdlib.h>

int	ft_nlen(int n)
{
	int i = 0;

	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
char	*ft_itoa(int nbr)
{
	char	*nstr;
	int		nlen;
	int 	i = 0;

	nlen = ft_nlen(nbr);
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	nstr = malloc(nlen + i + 1);
	if (!nstr)
		return (NULL);
	nstr[0] = '-';
	nstr[nlen + i] = '\0';
	while ((nlen - 1) >= i)
	{
		nstr[nlen -1] = (nbr % 10) + '0';
		nbr /= 10;
		nlen--;
	}
	return (nstr);
}
#include <stdio.h>

int main()
{
	printf("%s\n", ft_itoa(1234));
}
