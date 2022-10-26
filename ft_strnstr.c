/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:07:10 by souledla          #+#    #+#             */
/*   Updated: 2022/10/26 13:22:42 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (len == 0 && !haystack)
		return (0);
	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (i + j < len && haystack[i + j] == needle[j])
			{
				j++;
				if (!needle[j])
					return ((char *)haystack + i);
			}
		}
		i++;
	}
	return (0);
}
// int main()
// {
//     char *s1 = "";
// 	char *s2 = "hello";
//     printf("%s\n", ft_strnstr("aaabcabcd", "aabc", -1));  
//     printf("----------\n");
//     printf("%s\n", strnstr("aaabcabcd", "aabc", -1)); 
// }
