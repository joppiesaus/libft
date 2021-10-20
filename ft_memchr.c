#include "libft.h"

/* locates memory location of char c in void *s */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((const char *)s)[i] == (char)c)
		{
			return ((void *)(((const char *)s) + i));
		}
		i++;
	}
	return (NULL);
}
