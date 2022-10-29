/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:07:55 by souledla          #+#    #+#             */
/*   Updated: 2022/10/29 18:04:57 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>


char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char) c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
// int main()
// {
//     char *s1 = "hyllo";
// 	char *s2 = "hyllo";
//     printf("%s\n", ft_strrchr(s1, 0));  
//     printf("----------\n");
//     printf("%s\n", strrchr(s1, 0)); 
// }
