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
	char	*s;
	size_t	 i;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (n == 0)
	    return dst;
	n--;
	
	while (i <= n)
	{
		d[i] = s[i];
		i++;
	}
	return dst;
}
