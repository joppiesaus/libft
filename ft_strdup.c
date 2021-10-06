#include <libft.h>

#include <stdlib.h>

char	*strdup(const char *s1)
{
	char	*s2;
	size_t	len;
	size_t	n;

	len = ft_strlen(s1) + 1;
	s2 = malloc(len);
	n = 0;
	while (n < len)
	{
		s2[n] = s1[n];
	}
	return (s2);
}
