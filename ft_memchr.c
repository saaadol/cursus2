#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    char *x;
    x = (char *) s;
    size_t i;
    i = 0;
    while (i < n)
    {
        if (x[i] == c)
            return x + i;
        i++;
        
    }
    return 0;
}