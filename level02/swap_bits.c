#include <stdio.h>

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int main()
{
	int i = 7;

	while (i >= 0)
		printf("%d", (swap_bits('A') >> i--) & 1);
}