#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != 0)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == 0)
	{
		return ((char *)s);
	}
	return (NULL);
}

/* cursed implementation: size_t cannot go below zero, so will underflow.
 * Instead of casting to a long, just add one and decrement beforehand.*/
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (i > 0)
	{
		i--;
		if (s[i] == c)
		{
			return ((char *)s + i);
		}
	}
	return (NULL);
}
