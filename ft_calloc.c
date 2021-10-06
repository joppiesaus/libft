#include "libft.h"

#include <sdtlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*a;

	a = malloc(count * size);
	if (a == NULL)
		return (a);
	ft_memset(a, 0, count * size);
	return (a);
}
