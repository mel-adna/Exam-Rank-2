char    *rev_print(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    i--;
    while (str[i] && i >= 0)
        write(1, &str[i--], 1);
}
