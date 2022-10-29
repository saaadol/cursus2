/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:41:45 by souledla          #+#    #+#             */
/*   Updated: 2022/10/29 20:13:30 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h> 
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
int main()
{
	char c = 'd';
	
	int fd1 = open("sample.txt", O_RDWR | O_CREAT, 0777); 
	write(fd1, &c, 1);
	printf("%d",fd1);
}
