#include "libft.h"

#include <unistd.h>

void	ft_putendl_fd(const char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
