#include "libft.h"

/* intead of doing the classic integer counting,
 * increment the pointer. this is slightly faster
 * (probably has to do something with memory access or something idk) */
size_t	ft_strlen(const char *s)
{
	const char	*start;

	start = s;
	while (*s != 0)
	{
		s++;
	}
	return (s - start);
}
