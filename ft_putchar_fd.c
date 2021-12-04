#include "libft.h"

#include <unistd.h>

void	ft_putchar_fd(const char c, int fd)
{
	write(fd, &c, 1);
}
