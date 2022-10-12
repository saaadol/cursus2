/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:58:23 by souledla          #+#    #+#             */
/*   Updated: 2022/10/12 13:35:57 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Online C compiler to run C program online
#include <stdio.h>
# include "libft.h"
int delim_counter(char const *str, char c)
{
	int i;
	int counter;

	counter = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			counter++;
		i++;
	}
	return counter;

}

void	func(char **temp, char x0, char x1, char x2, char const *s) 
{
	temp[x0][x2] = '\0';
	while(x2 >= 0)
		temp[x0][x2] = s[x2 + x1];
		x2--;
}

char	**ft_split(char const *s, char c)
{
	char **temp;
	int x[3];

	x[0] = 0;
	temp = (char **)malloc((delim_counter(s, c) + 2) * sizeof(const char));
	if (!temp)
		return 0;
	x[1] = 0;
	while(s[x[1]])
	{
		if (x[1] == 0 || s[x[1]] == c)
		{ 
			x[2] = 0;
			if (s[x[1]] == c)
				x[1]++;
			while (s[x[1]+x[2]] != c && s[x[1]+x[2]])
				x[2]++;
			temp[x[0]]=(char *) malloc(x[2] * sizeof(char));
			if (!temp)
				return 0;
			func(temp,x[0],x[1],x[2],s);
			x[0]++;
		}
		x[1]++;
	}
	return temp;
}
/*
int main() {
    char **temp = ft_split("AASaSASAafdksjfkfdjfdjfsa64545",'a');
    int x[3];
    x[0] = 1;
    printf("%s\n",temp[0]);
    printf("%s\n",temp[1]);
    printf("%s\n",temp[2]);
    printf("%s\n",temp[3]);
    printf("%d",x[0]);


    return 0;
}
*/
