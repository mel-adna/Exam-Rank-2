#include <unistd.h>

int main(int arc, char **arv)
{
	if (arc == 2)
	{
		int i = 0;
		while (arv[1][i])
			i++;
		i--;
		while (arv[1][i] && (arv[1][i] == ' ' || arv[1][i] == '\t'))
			i--;
		while (arv[1][i] && (arv[1][i] != ' ' || arv[1][i] != '\t'))
			i--;
		i++;
		while (arv[1][i] && (arv[1][i] != ' ' || arv[1][i] != '\t'))
		{
			write(1, &arv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}