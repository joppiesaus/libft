#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
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

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	n;

	len = ft_strlen(dst);
	n = 0;
	while (n < dstsize - len - 1 && src[n] != 0)
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
