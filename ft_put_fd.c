#include <unistd.h>

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}