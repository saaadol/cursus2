/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:06:32 by souledla          #+#    #+#             */
/*   Updated: 2022/10/28 14:01:33 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*temp;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	temp = (char *)malloc(count * size);
	if (!temp)
		return (0);
	ft_memset(temp, 0, count * size);
	return (temp);
}
