#include "libft.h"

#include <stdlib.h>

/* TODO: double pass? */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dst;
	char			t;
	unsigned int	si;
	unsigned int	di;

	if (s == NULL)
		return (s);
	dst = malloc(ft_strlen(s) + 1);
	if (dst == NULL)
		return (dst);
	si = 0;
	di = 0;
	while (s[si] != 0)
	{
		t = f(si, s[si]);
		if (t)
		{
			dst[di] = t;
			di++;
		}
		si++;
	}
	dst[di] = 0;
	return (dst);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i] != 0)
	{
		f(i, (s + i));
		i++;
	}
}
