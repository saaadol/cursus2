/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:06:32 by souledla          #+#    #+#             */
/*   Updated: 2022/10/08 17:18:58 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib>

void *ft_calloc(size_t count, size_t size)
{
	char *temp;
	temp = (char *)malloc(count, size);
	if (!temp)
		return 0;
	ft_bzero(temp, count);
	return (temp);
}
