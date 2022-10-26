/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:30:49 by souledla          #+#    #+#             */
/*   Updated: 2022/10/26 15:14:29 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*x;
	size_t		i;

	if (!n)
		return (0);
	x = s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)x[i] == (unsigned char) c)
			return ((char *)x + i);
		i++;
	}
	return (0);
}
