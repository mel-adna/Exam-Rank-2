#include <stdio.h>
#include <stdlib.h>

int main(int arc, char *arv[])
{
	if (arc == 4)
	{
		if (arv[2][0] == '+')
			printf("%d\n", atoi(arv[1]) + atoi(arv[3]));
		else if (arv[2][0] == '*')
			printf("%d\n", atoi(arv[1]) * atoi(arv[3]));
		else if (arv[2][0] == '/')
			printf("%d\n", atoi(arv[1]) / atoi(arv[3]));
		else if (arv[2][0] == '-')
			printf("%d\n", atoi(arv[1]) - atoi(arv[3]));
		else if (arv[2][0] == '%')
			printf("%d\n", atoi(arv[1]) % atoi(arv[3]));
	}
	else
		printf("\n");
}