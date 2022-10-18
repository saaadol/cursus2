/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:41:20 by souledla          #+#    #+#             */
/*   Updated: 2022/10/12 10:41:29 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*
int main()
{
    char str[] = "Hello";
    char b[] = "World";
    char c[] = "Hello";
	char str1[] = "Hello";
    printf("%zu\n",ft_strlcpy(str, b, 3));
    printf("%lu\n",strlcpy(str1, c, 3));

    printf("%s\n",str);
    printf("%s\n",str1);
}
*/