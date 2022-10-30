/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:06:32 by souledla          #+#    #+#             */
/*   Updated: 2022/10/30 16:29:09 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*ptr;
	size_t		t;

	t = count * size;
	if (!count || !size)
		t = 1;
	else
		if (t / count != size)
			return (NULL);
	ptr = malloc(t);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, t);
	return (ptr);
}
