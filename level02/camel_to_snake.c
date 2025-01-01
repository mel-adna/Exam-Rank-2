#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int arc, char *arv[])
{
	if (arc == 2)
	{
		int i = 0;
		int s = 0;
		int j = 0;
		char *str;
	
		while (arv[1][i])
		{
			if (arv[1][i] >= 'A' && arv[1][i] <= 'Z')
				s++;
			i++;
		}
		str = malloc(i + s + 1);
		if (!str)
			return (0);
		i = 0;
		while (arv[1][j])
		{
			if (arv[1][j] >= 'A' && arv[1][j] <= 'Z')
			{
				str[i++] = '_';
				str[i] = arv[1][j++] + 32;
			}
			else
				str[i] = arv[1][j++];
			i++;
		}
		str[i] = '\0';
		i = 0;
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
		free(str);
	}
	write(1, "\n", 1);
}