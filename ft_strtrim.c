/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:55:31 by souledla          #+#    #+#             */
/*   Updated: 2022/10/08 20:57:50 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

int checksset(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		f;

	i = 0;
	while (*(s1 + i))
	{
		j = 0;
		while (*(set + j))
		{
			f = 0;
			if (*(s1 + i) == *(set + j))
			{
				f = 1;
				break ;
			}
			j++;
		}
		if (f == 1)
			i++;
		else
			break ;
	}
	return (i);
}
int checkeset(char const *s1, char const *set, int last)
{
	int		i;
	int		j;
	int		f;

	i = 0;
	while (*(s1 + (last - i)))
	{
		j = 0;
		while (*(set + j))
		{
			f = 0;
			if (*(s1 + (last - i)) == *(set + j))
			{
				f = 1;
				break ;
			}
			j++;
		}
		if (f == 1)
			i++;
		else
			break ;
	}
	return (last - i);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int 	s_l;
	int 	start;
	int 	end;
	int 	i;
	char	*str;

	s_l = ft_strlen(s1);
	start = checksset(s1, set);
	end = checkeset(s1, set, s_l - 1);
	str = (char *) malloc(((end - start) + 2) * sizeof(char));
	if (str)
	{
		i = 0;
		while (start <= end)
			*(str + i++) = *(s1 + start++);
		*(str + i) = '\0';
	}
	return (str);
}

