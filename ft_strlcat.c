/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:49:13 by souledla          #+#    #+#             */
/*   Updated: 2022/10/12 12:11:24 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>



size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		src_len;
	size_t	dest_len;
	int		total_len;
	int		i;

	if (dstsize == 0 && !dst )
		return 0; 
	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	if (dstsize == 0)
		return (src_len);
	total_len = dest_len + src_len;
	if (dstsize <= dest_len)
		total_len = dstsize + src_len;
	else if (dstsize >= dest_len)
	{
		while (src[i] != '\0' && dest_len < dstsize - 1)
			dst[dest_len++] = src[i++];
		dst[dest_len] = '\0';
	}
	return (total_len);
}
/*
int main()
{
	char x[] = "Hellow";
	//printf("%zu",ft_strlcat(0, x, 0));
	printf("%zu",strlcat(x, 0, 0));
} 
*/