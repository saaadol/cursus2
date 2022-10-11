#include "libft.h"
void *ft_memmove(void *dest, const void *src, int n)
{
    char *s;
    char *d;
    size_t i;
    
    d = (char *) dest;
    s = (char *) src;
    i = 0;
    if (d < s)
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        n--;
        char *lasts = s + (n-1);
        char *lastd = d + (n-1);
        while (n--)
            *lastd-- = *lasts--;
    }
    return dest;
}