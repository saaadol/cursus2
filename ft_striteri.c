void f(unsigned int i, char *s)
{
        *s += 1;
}

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int x;
    unsigned int i;
    
    x = 0;
    i = 0;
    while (s[x])
        x++;
    while (i < x)
    {
        f(i,&s[i]);
        i++;
    }
}