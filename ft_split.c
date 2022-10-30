/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:51:29 by souledla          #+#    #+#             */
/*   Updated: 2022/10/30 15:08:17 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	int	i;
	int	count;
	int	op;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		op = 1;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			if (op == 1)
			{
				count++;
				op = 0;
			}
		i++;
		}
	}
	return (count);
}

static char	**free_words(char **array, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

static char	**split2(char const *s, char c, char **array, int start)
{
	int		i;
	int		j;
	int		finish;

	i = -1;
	j = 0;
	finish = -1;
	while (s[++i] != '\0')
	{
		if (s[i] != c && start == -1)
			start = i;
		if ((s[i] != c && finish == -1 && s[i + 1] == c) || s[i + 1] == '\0')
			finish = i + 1;
		if (start != -1 && finish != -1)
		{
			array[j] = ft_substr(s, start, finish - start);
			if (!array[j])
				return (free_words(array, j));
			j++;
			start = -1;
			finish = -1;
		}
	}
	array[j] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	size_t	wordcount;
	char	**res;
	char	**array;
	int		start;

	if (!s)
		return (0);
	wordcount = count(s, c);
	array = (char **)malloc(sizeof(char *) * (wordcount + 1));
	if (!array)
		return (0);
	start = -1;
	res = split2(s, c, array, start);
	return (res);
}
