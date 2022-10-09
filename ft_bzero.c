/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:54:53 by souledla          #+#    #+#             */
/*   Updated: 2022/10/09 21:10:58 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	int i; 
	char * temp;

	temp = (char *) s;
	i = 0;
	if (n == 0)
	   return 0;
	else
		{
			while (i < n)
			{
				temp[i] = '\0';
				i++;
			}
		}	
	return (temp); 
}
