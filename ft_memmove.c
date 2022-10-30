/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:40:48 by souledla          #+#    #+#             */
/*   Updated: 2022/10/30 14:32:55 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char				*d;
	const unsigned char			*s;
	const unsigned char			*lasts;
	unsigned char				*lastd;

	s = src;
	d = dest;
	if (d || s)
	{
		if (d < s)
			while (n--)
				*d++ = *s++;
		else
		{
			lasts = s + (n - 1);
			lastd = d + (n - 1);
			while (n--)
				*lastd-- = *lasts--;
		}
		return (dest);
	}
	return (NULL);
}
