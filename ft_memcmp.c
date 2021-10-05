#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	n -= 1;
	while (i < n)
	{
		if (*((const unsigned char *)s1) != *((const unsigned char *)s2))
			break ;
		s1++;
		s2++;
		i++;
	}
	return (*((const unsigned char *)s1) - *((const unsigned char *)s2));
}
