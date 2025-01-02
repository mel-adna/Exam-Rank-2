char    *ft_strrev(char *str)
{
    int j, i = 0;
    char tmp;

    while (str[i])
        i++;
    i--;
    j = 0;
    while (i > j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i--;
        j++;
    }
    return (str);
}
