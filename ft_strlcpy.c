#include "libft.h"

/* copies src to dst with a maximum of dstsize chars.
 * returns length of string it intended to create. */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;

	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	n = 0;
	while (n < dstsize - 1 && src[n] != 0)
	{
		dst[n] = src[n];
		n++;
	}
	dst[n] = 0;
	return (ft_strlen(src));
}
