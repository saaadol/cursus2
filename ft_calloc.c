/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:06:32 by souledla          #+#    #+#             */
/*   Updated: 2022/10/09 21:11:39 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	if (count == SIZE_MAX && size == SIZE_MAX) 
		return NULL;
	char *temp;
	temp = (char *)malloc(count * size);
	if (!temp)
		return 0;
	ft_memset(temp, 0, count * size);
	return (temp);
}
