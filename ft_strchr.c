#include "libft.h"

/* locates memory location of char c in s, returns NULL if not found. */
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

/* Same stuff, except the last occurence.
 * cursed implementation: size_t cannot go below zero, so will underflow.
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

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((const char *)s)[i] == c)
		{
			return ((void *)(((const char *)s) + i));
		}
		i++;
	}
	return (NULL);
}