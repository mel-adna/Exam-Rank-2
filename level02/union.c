#include <unistd.h>

int main(int arc, char *arv[])
{
	if (arc == 3)
	{
		unsigned char arr[256] = {0};
		int	j, i = 0;

		while (arv[1][i])
		{
			j = 0;
			while (arv[1][j])
			{
				if (!arr[(unsigned char)arv[1][j]])
				{
					write(1, &arv[1][j], 1);
					arr[(unsigned char)arv[1][j]] = 1;
				}
				j++;
			}
			j = 0;
			while (arv[2][j])
			{
				if (!arr[(unsigned char)arv[2][j]])
				{
					write(1, &arv[2][j], 1);
					arr[(unsigned char)arv[2][j]] = 1;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}