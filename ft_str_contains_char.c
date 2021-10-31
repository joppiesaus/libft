#include "libft.h"

/* returns 1 if char c is found in string s. */
int	ft_str_contains_char(const char *s, const int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return (1);
		s++;
	}
	return (0);
}
