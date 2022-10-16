#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned char *x1;
    unsigned char *x2;
    size_t i;

    x1 = (unsigned char *) s1;
    x2 = (unsigned char *) s2;
    i = 0;
    while (i < n && (x1[i] || x2[i]))
    {
        if (x1[i] !=  x2[i])
            return (x1[i] - x2[i]);
        i++;
    }
    return 0;
}