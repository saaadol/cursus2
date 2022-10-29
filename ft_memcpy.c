/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:40:17 by souledla          #+#    #+#             */
/*   Updated: 2022/10/29 15:50:57 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const char	*s;
	size_t		i;

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
		return (dst);
	}
	return (NULL);
}
