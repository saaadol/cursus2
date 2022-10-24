#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*x;
	size_t	i;

	x = (char *) s;
	if (c > 256)
		c = c - 256; 
	i = 0;
	while (i < n)
	{
		if (x[i] == c)
			return x + i;
		i++;    
	}
	return (0);
}