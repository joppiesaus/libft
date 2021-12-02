#include "libft.h"

#include <stdlib.h>

/* frees a null-terminated array of c strings. */
void	ft_free_str_arr(char **arr)
{
	char	**orig_arr;

	orig_arr = arr;
	while (*arr)
	{
		free(*arr);
		arr++;
	}
	free(orig_arr);
}
