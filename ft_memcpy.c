#include <stddef.h>

/* Instead of copying byte by byte, copy by size_t.
This is in theory faster because you can copy more each cycle.
This difference is noticible if you do not compile with -O2,
however somehow the compiler optimizes it so there is not difference
anymore.  */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	size_t	max_n;

	i = 0;
	max_n = (n / sizeof(size_t));
	while (i < max_n)
	{
		((size_t *)dst)[i] = ((const size_t *)src)[i];
		i++;
	}
	i *= sizeof(size_t);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
