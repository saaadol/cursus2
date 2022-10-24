#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
    int i;
    i = ft_strlen(s);
    if (c > 256)
        c = c -256;
    while(i >= 0)
    {
        if (s[i] == c)
            return (char *)s + i;
        i--;
    }
    return 0;
}