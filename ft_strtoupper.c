#include "libft.h"

char	*ft_strtoupper(char *s)
{
	const char	*orig;

	orig = s;
	while (*s != 0)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= ('a' - 'A');
		}
		s++;
	}
	return ((char *)orig);
}
