#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 1;
	while (i < n && *s1 != 0)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		i++;
	}
	return (*((const unsigned char *)s1) - *((const unsigned char *)s2));
}
