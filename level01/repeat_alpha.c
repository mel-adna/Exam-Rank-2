#include <unistd.h>

int main(int arc, char *arv[])
{
	if (arc == 2 && arv[1][0] != '\0')
	{
		int i = 0;
		int j = 0;
		while (arv[1][i])
		{
			if (arv[1][i] >= 'a' && arv[1][i] <= 'z')
			{
				j = arv[1][i] - 'a' + 1;
				while (j--)
					write(1, &arv[1][i], 1);
			}
			else if (arv[1][i] >= 'A' && arv[1][i] <= 'Z')
			{
				j = arv[1][i] - 'A' + 1;
				while (j--)
					write(1, &arv[1][i], 1);
			}
			else
				write(1, &arv[1][i], 1);
			i++;
		}
		
	}
	write(1, "\n", 1);
}