
#include "libft.h"


void ft_putnbr_fd(int n, int fd)
{
	long num;

	num =(long) n;
	if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
	}
	if(n > 9)
		ft_putnbr_fd(n/10,fd);
	ft_putchar_fd(n%10 + '0', fd);
}
