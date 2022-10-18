#include "libft.h"

int len_counter(int c)
{
    int counter; 
    counter = 0;
    while (c > 9)
    {
        c = c / 10; 
        counter++;
    }
    return counter ;
}

void dev(int c, char *x , int temp, int flag)
{
    int m;
    int t;
    
    t = temp +1;
    while  (c > 9)
    {
        m = c % 10;
        c = c / 10;
        x[temp--] = m + '0';
    } 
    if (c < 10)
    {
      m = c % 10;
      x[temp] = m + '0';
    }
    if (flag == 1)
        x[t++] = '\0';
    else
        x[t] = '\0';
}
char *ft_itoa(int c)
{
    char *x;
    int temp;
    int flag;
    
    flag = 0;
    if (c < 0)
    {
      c *= -1;
      flag = 1;
    }
    temp = len_counter(c) + 1;
    if (flag == 1)
    {
        x = (char *)malloc(sizeof(char) * (temp + 2));
        if(!x)
            return 0;
        x[0] = '-';
    }
    else
    {
        x = (char *)malloc(sizeof(char) * (temp + 1));
        if(!x)
            return 0;
        temp--;
    }
    dev(c, x, temp, flag);
    return x;
}