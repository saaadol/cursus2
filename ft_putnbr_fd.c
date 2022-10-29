/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:44:00 by souledla          #+#    #+#             */
/*   Updated: 2022/10/29 18:30:52 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	n1;

	n1 = n;
	if (n1 < 0)
	{
		write(fd, "-", 1);
		n1 = -n1;
	}
	if (n1 > 9)
	{
		ft_putnbr_fd(n1 / 10, fd);
		ft_putnbr_fd(n1 % 10, fd);
	}
	if (n1 < 10)
	{
		ft_putchar_fd(n1 + '0', fd);
		return ;
	}
}
