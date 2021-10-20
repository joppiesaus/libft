#include "libft.h"

/* locates memory location of char c in s, returns NULL if not found. */
char	*ft_strchr(const char *s, int c)
{
	while (*s != 0)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == 0)
	{
		return ((char *)s);
	}
	return (NULL);
}
