#include <unistd.h>

int main(int arc, char **arv)
{
	if (arc == 3)
	{
		int i = 0;
		int j = 0;

		while (arv[1][i])
		{
			while (arv[2][j])
			{
				if (arv[1][i] == arv[2][j])
					break;
				j++;
			}
			if (!arv[2][j])
				return (write(1, "\n", 1), 0);
			i++;			
		}
		i = 0;
		while (arv[1][i])
		{
			write(1, &arv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}