/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:24:03 by souledla          #+#    #+#             */
/*   Updated: 2022/10/12 13:39:01 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
	
{
	size_t i; 

	i = 0;
	char *temp;
   	if (start > ft_strlen(s))
	{
		temp = (char *)malloc(sizeof (char) * 1);
		if (!temp)
			return 0;
		temp[i] = '\0';
	}	
	temp = (char *)malloc(sizeof (char) * (len + 1));
	if (!temp)
		return 0;
	while (len > i)
	{
		temp[i++] = s[start++];
	}
	temp[i] = '\0';
	return temp;
}
