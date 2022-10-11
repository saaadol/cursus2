// Online C compiler to run C program online
#include "libft.h"
size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t len_src;
    
    len_src = ft_strlen(src) - 1;
    i = 0;
    
    if (size == 0)
        return len_src;
    size--;
    while(dst[i] && i <= size)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return len_src;
}