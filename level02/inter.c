#include <unistd.h>

int main(int arc, char **arv)
{
    if (arc == 3)
    {
        int j, i = 0;
        unsigned char arr[256] = {0};

        while (arv[1][i])
        {
            j = 0;
            while (arv[2][j])
            {
                if(!arr[(unsigned char)arv[1][i]])
                {
                    write(1, &arv[1][i], 1);
                    arr[(unsigned char)arv[1][i]] = 1;
                    break;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}