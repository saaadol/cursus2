/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:24:03 by souledla          #+#    #+#             */
/*   Updated: 2022/10/08 17:29:55 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int i; 

	i = 0;
	char *temp; 
	temp = (char *)malloc(sizeof (char) * (len + 1));
	if (!temp)
		return 0;
	while (len >= 0)
	{
		temp[i++] = s[start++];
		len--;
	}
	temp[i] = '\0';
	return temp;
}
