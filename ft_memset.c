/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:27:24 by souledla          #+#    #+#             */
/*   Updated: 2022/10/29 23:47:09 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char	*x;

	x = b;
	i = 0;
	while (i < len)
	{
		x[i] = (char)c;
		i++;
	}
	return (b);
}
// int main()
// {
// 	int x = {1337};
// 	int number = 255 << 8 | 97;
	
// 	char c = 'a';
// 	int cn = (int)c;
	

// 	if (c == (char)number)
// 		printf("hello there\n");
// 	int *x2 = ft_memset(&x, 5, 2);
// 	//  x2 = ft_memset(&x, 57,1);
// 	//ft_memset(&x, 5,2);
// 	// ft_memset(x, 5,2);
// 	printf("%d", x);
	
// }
