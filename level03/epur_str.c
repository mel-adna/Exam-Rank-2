#include <unistd.h>

int main(int arc, char *arv[])
{
    if (arc == 2)
    {
        int i = 0;
		int first_word = 1;

		while (arv[1][i])
		{
			while ((arv[1][i] == ' ' || arv[1][i] == '\t') && arv[1][i])
				i++;
			if (arv[1][i])
			{
				if (first_word == 0)
					write(1, " ", 1);
				while (arv[1][i] && (arv[1][i] != ' ' && arv[1][i] != '\t'))
				{
					write(1, &arv[1][i], 1);
					i++;
				}
			}
			first_word = 0;
		}
    }
    write(1, "\n", 1);
}
