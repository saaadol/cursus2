/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:40:17 by souledla          #+#    #+#             */
/*   Updated: 2022/10/30 15:07:01 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const char			*s;

	if (dst || src)
	{
		d = dst;
		s = src;
		while (n)
		{
			*d++ = *s++;
			n--;
		}
		return (dst);
	}
	return (NULL);
}
