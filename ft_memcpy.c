/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:40:17 by souledla          #+#    #+#             */
/*   Updated: 2022/10/12 10:40:23 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
    const char	*s;
	size_t	 i;
    if (dst || src)
    {
    	i = 0;
    	d = dst;
    	s = src;
    
    	while (n)
    	{
    		*d++ = *s++;
    		n--;
    	}
        
    	return dst;
    }
    return NULL;
}
