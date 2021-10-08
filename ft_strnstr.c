#include "libft.h"

/* todo: test */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len && haystack[i] != 0)
	{
		j = 0;
		while (haystack[i] == needle[j] && i < len)
		{
			if (needle[j] == 0)
				return ((char *)haystack + i);
			i++;
			j++;
		}
		i = i - j + 1;
	}
	return (NULL);
}
