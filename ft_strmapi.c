/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:50:40 by souledla          #+#    #+#             */
/*   Updated: 2022/10/20 15:50:43 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char f(unsigned int i, char c)
// {
//     c = c + 1;
//     return c;
// }

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char  *x;
    unsigned int len;

    i = 0;
    if (!s)
        return NULL;
    len = ft_strlen(s);
    x = (char *)malloc(sizeof(char) * (len + 1));
    if (!x)
        return 0;
    while (i < len)
    {
        x[i] = f(i, s[i]);
        i++;
    }
    x[i] = '\0';
    return x;
}
// int main() {
//     char x[] = "abcd";
//     printf("%s",ft_strmapi(x,*f));

//     return 0;
// }