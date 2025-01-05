#include <unistd.h> 

int main(int arc, char *arv[])
{
	if (arc == 3)
	{
		int j = 0, i = 0;

		while (arv[2][j] && arv[1][i])
		{
			if (arv[2][j] == arv[1][i])
				i++;
			j++;
		}
		if (!arv[1][i])
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}