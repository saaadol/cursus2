#include <stdio.h>
#include <stdlib.h>

int len_counter(long c)
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

void dev(long c, char *x , int temp, int flag)
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
char *ft_itoa(int c1)
{
    char *x;
    int temp;
    int flag;
    long c;
    
    c = c1;
    flag = 0;
    if (c < 0)
    {
      c = -c;
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