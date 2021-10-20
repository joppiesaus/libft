#include "libft.h"

/* Locates last memory location of char c in s, returns NULL if not found.
 * cursed implementation: size_t cannot go below zero, so will underflow.
 * Instead of casting to a long, just add one and decrement beforehand.*/
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (i > 0)
	{
		i--;
		if (s[i] == (char)c)
		{
			return ((char *)s + i);
		}
	}
	return (NULL);
}
