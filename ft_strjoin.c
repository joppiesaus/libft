#include "libft.h"

#include <stdlib.h>

/* todo: test */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	s1_len;
	size_t	s2_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	res = malloc(s1_len + s2_len + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		res[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < s2_len)
	{
		res[i + s1_len] = s2[i];
		i++;
	}
	res[i + s1_len] = 0;
	return (res);
}
