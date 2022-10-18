#include "libft.h"
#include<stdio.h>
#include<string.h>
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;
	char	*s;

	i = 0;
	j = 0;
	n = ft_strlen(needle);
	s = (char *) haystack;
	if (n == 0 || len == 0) 
		return (s);
	while (i < len)
	{
		if (needle[j] == s[i] && j <= n)
			j++;
		else
			j = 0;
		i++;
		if (j == n)
			return (s + i - n);
	}
	return NULL;
}

// int main()
// {
//     char *s1 = "";
// 	char *s2 = "hello";
//     printf("%s\n", ft_strnstr(0, "hello", 3));  
//     printf("----------\n");
//     printf("%s\n", strnstr(0, "hello", 3)); 
// }
