/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:55:31 by souledla          #+#    #+#             */
/*   Updated: 2022/10/29 23:45:32 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkfirst(char const *s1, char const *set)
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

static int	checklast(char const *s1, char const *set, int last)
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
	int		s_l;
	int		start;
	int		end;
	int		i;
	char	*str;

	if (!s1 || !set)
		return (0);
	s_l = ft_strlen(s1);
	start = checkfirst(s1, set);
	end = checklast(s1, set, s_l - 1);
	if (start > end)
		return (ft_calloc(1, 1));
	str = (char *) malloc(((end - start) + 2) * sizeof(char)); // << protection
	
	if (str)
	{
		i = 0;
		while (start <= end)
			*(str + i++) = *(s1 + start++);
		*(str + i) = '\0';
	}
	return (str);
}


// int main(int argc, char const *argv[])
// {
// 	char SET[] ="  \t";
// 	char x[]= "			abeahelloaaeab		";
// 	char *rr = ft_strtrim(x, SET);
	
// 	printf("%s",rr);
// 	free(rr);
// 	system("leaks trim");
// 	return 0;
// }
