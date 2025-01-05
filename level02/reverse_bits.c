#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char rev = 0;
	int i = 0;

	while (i < 8)
	{
		rev = (rev << 1) | (octet & 1);
		octet >>= 1;
		i++;
	}
	return (rev);
}

int main ()
{
	int i = 7;

	while (i >= 0)
		printf("%d", (reverse_bits('A') >> i--) & 1);
}