#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    
    i = 0;
    
    if (ft_strlen(little) == 0 ||  (len == 0))
        return big;
    len--;
    while(big[i] && i < len)
    {
        j = 0;
        while (little[j])
        {
            if (big[i] == little[j])
                return big + i;
            j++;
        }
        i++;
        
    }
    return NULL;
}