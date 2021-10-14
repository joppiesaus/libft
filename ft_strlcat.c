#include "libft.h"

#include <limits.h>

/* Concats src to dst with a maximum of dstsize chars.
 * returns the length of the string it intended to create.
 * TODO: uses long, might overflow because of the size_t,
 * though who uses such large strings?
 * this is also why there is a protection built in for underflowing. */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	long	len;
	long	n;
	long	ldstsize;

	len = (long)ft_strlen(dst);
	n = 0;
	ldstsize = (long)dstsize;
	if (ldstsize < 0)
	{
		ldstsize = LONG_MAX;
	}
	while (n < ldstsize - len - 1 && src[n] != 0)
	{
		dst[n + len] = src[n];
		n++;
	}
	if (ldstsize > 0)
	{
		dst[n + len] = 0;
	}
	if (len > ldstsize)
	{
		len = ldstsize;
	}
	return (len + ft_strlen(src));
}
