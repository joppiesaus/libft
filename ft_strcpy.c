#include <stddef.h>

char	*ft_strcpy(char *dst, const char *src)
{
	while (*src != 0)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = 0;
	return (dst);
}

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	n;

	n = 0;
	while (src[n] != 0 && n < len)
	{
		dst[n] = src[n];
		n++;
	}
	while (n < len)
	{
		dst[n] = 0;
		n++;
	}
	return (dst);
}
