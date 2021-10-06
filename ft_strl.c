#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;

	n = 0;
	while (n < dstsize - 1 && src[n] != 0)
	{
		dst[n] = src[n];
		n++;
	}
	if (dstsize > 0)
	{
		dst[n] = 0;
	}
	return (ft_strlen(src));
}

/* TODO: uses long, might overflow because of the size_t,
 * though who uses such large strings? */
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	long	len;
	long	n;

	len = (long)ft_strlen(dst);
	n = 0;
	while (n < (long)dstsize - len - 1 && src[n] != 0)
	{
		dst[n + len] = src[n];
		n++;
	}
	if (dstsize > 0)
	{
		dst[n + len] = 0;
	}
	return (len + ft_strlen(src));
}
