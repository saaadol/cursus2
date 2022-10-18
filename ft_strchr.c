/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:19:13 by souledla          #+#    #+#             */
/*   Updated: 2022/10/18 11:19:18 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strchr(const char *s, int c)
{

    int i;
    int len;
    len = ft_strlen(s);
    i = 0;
    while(i <= len)
    {
        if (s[i] == c)
            return (char *)s + i;      
        i++;
    }
    return 0;
}

// int main ()
// {
//   char *x = "hello";
//   int b = 116 + 256;
//   printf("%s", ft_strchr(x,b));
// }
