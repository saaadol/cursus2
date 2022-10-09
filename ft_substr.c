/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:24:03 by souledla          #+#    #+#             */
/*   Updated: 2022/10/09 18:28:20 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
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
int main() {
	char arr[]="Hello World";
	printf("%s",ft_substr(arr,5,3));
    return 0;
}
