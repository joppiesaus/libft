#include "libft.h"

/* tries to find string needle in string haystack, with max len chars searched.
 * returns NULL on failure, the location on success. */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == 0)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != 0)
	{
		j = 0;
		while (haystack[i] == needle[j] && i < len)
		{
			if (needle[j + 1] == 0)
				return ((char *)haystack + i - j);
			i++;
			j++;
		}
		i = i - j + 1;
	}
	return (NULL);
}
