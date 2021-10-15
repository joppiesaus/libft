#include "libft.h"

#include <stdlib.h>

/* malloc's count * size, sets to 0 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*a;

	a = malloc(count * size);
	if (a == NULL)
		return (a);
	ft_memset(a, 0, count * size);
	return (a);
}
