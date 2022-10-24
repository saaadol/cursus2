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
	char *temp;

	i = 0;
	if (start < 0 || !s)
		return 0;
	else if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);	
   	else if (start >= ft_strlen(s))
		len = 0 ;
	temp = (char *)malloc(sizeof (char) * (len + 1));
	if (!temp)
		return 0;
	while (len > i)
	{
		temp[i] = s[start +i];
		i++;
	}
	temp[i] = '\0';
	return temp;
}
