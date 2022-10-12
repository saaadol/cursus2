#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char *x1;
    char *x2;
    x1 = (char *) s1;
    x2 = (char *) s2;
    size_t i;
    i = 0;
    while ((x1[i] || x2[i]) && i < n)
    {
        if (n >= strlen(x1) && n >= strlen(x2) )
            return (x1[i] - x2[i]);
        if (x1[i] >  x2[i])
            return (1);
        else if (x1[i] <  x2[i])
            return (-1);
        i++;
        
    }
    return 0;
}