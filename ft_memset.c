#include "libft.h"
int ft_memset(void *s, int c, size_t n)
{
	size_t i;
	char *x;
	
	x = (char *) s; 
	i = 0;
	while (i < n)
	{
	    x[i] = c;
	    i++;
	}
	return (x);	
}
