
#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s,1);
		s++;
	}
	write(fd, "\n", 1);
}
