#include "libft.h"

char	*ft_strtolower(char *s)
{
	const char	*orig;

	orig = s;
	while (*s != 0)
	{
		if (*s >= 'A' && *s <= 'Z')
		{
			*s += ('a' - 'A');
		}
		s++;
	}
	return ((char *)orig);
}
