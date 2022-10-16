#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *x1;
    unsigned char *x2;
    x1 = (unsigned char *) s1;
    x2 = (unsigned char *) s2;
    size_t i;
    i = 0;
    while (i < n)
    {
        if (x1[i] !=  x2[i])
            return (x1[i] - x2[i]);
        i++;
        
    }
    return 0;
}