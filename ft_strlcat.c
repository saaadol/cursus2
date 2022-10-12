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

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t d;
	size_t s;
	size_t temp;
	
	d = strlen(dst);
	s = strlen(src);
	temp = d;
	i = 0;
	if (dstsize == 0)
		return s;
	else if ( dstsize < s)
		return s + dstsize;
	else if (dstsize >= s)
	{	
		while (src[i] && temp + 1 < (dstsize))
		{
	    	dst[temp] = src[i];
			i++;
			temp++;
		}
	}
	return d + s ; 
}
