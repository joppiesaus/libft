#include "libft.h"

#include <sdtlib.h>

/* TODO: double pass? */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dst;
	unsigned int	si;
	unsigned int	di;

	dst = malloc(ft_strlen(s) + 1);
	if (dst == NULL)
		return (dst);
	si = 0;
	di = 0;
	while (s[si] != 0)
	{
		if (f(si, s[si]))
		{
			dst[di] = s[si];
			di++;
		}
		si++;
	}
	dst[di] = 0;
	return (dst);
}
