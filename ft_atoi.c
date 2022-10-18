#include "libft.h"


int ft_atoi(const char *nptr)
{
    int i;
    int sign;
    int result;
    int temp;
    
    i = 0;
    sign = 1;
    result = 0;
    while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if ((nptr[i] == '+' || nptr[i] == '-') && (nptr[i + 1] >= 48 && nptr[i + 1] <= 57 ))
    {
        if (nptr[i] == '-')
            sign = -1 ;
        i++;
    }
    while ((nptr[i] >= 48 && nptr[i] <= 57 ))
    {
        temp = result;
        result = result *10;
        if (result / 10 != temp && result)
        {
            if (sign == -1)
                return 0;
            return -1; 
        }
               
        result += nptr[i] -48;
        i++;
    }
    return (result * sign);
}
