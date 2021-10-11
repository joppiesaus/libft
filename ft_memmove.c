#include "libft.h"

/* if dst & src may overlap, then copy back to front.
 * else do just a "normal" memcpy */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (src == NULL && dst == NULL && len > 0)
		return (src);
	if (dst > src)
	{
		i = len;
		while (i > 0)
		{
			i--;
			((char *)dst)[i] = ((const char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dst);
}
