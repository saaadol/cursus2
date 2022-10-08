/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:58:23 by souledla          #+#    #+#             */
/*   Updated: 2022/10/08 21:41:36 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int delim_counter(char *str, char c)
{
	int i;
	int counter;

	c = 0;
	i = 0;
  	while (str[i])
	{
		if (str[i] = c)
			counter++;
		i++;
	}
	return counter;

}
char **ft_split(char const *s, char c)
{
	char **temp;
	int delim;
	int i;
	int j;

	delim = delim_counter(s, c);
	temp = (char **)malloc(sizeof(char) * (delim + 2));
	if (!temp)
		return 0;
	i = 0;
	j = 0;
	while(s[i]);
	{
		if (s[i] == c)
			temp[i]=(char *)malloc(sizeof(char) * i);
			if (!temp)
			   return 0;
			temp[i][j] = s[i];
			
	}
	
	
	

}
