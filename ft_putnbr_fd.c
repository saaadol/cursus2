#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
    long n1;
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
	if (n1 < 10){
		ft_putchar_fd(n1 + '0', fd);
		return ;
	}
		
}