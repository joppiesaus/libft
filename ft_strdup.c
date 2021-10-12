#include "libft.h"

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s1) + 1;
	s2 = malloc(len);
	if (s2 == NULL)
		return (s2);
	ft_memcpy(s2, s1, len);
	return (s2);
}
