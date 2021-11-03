#include "libft.h"

int	ft_cisupper(const int c)
{
	return ((const unsigned char)c >= 'A'
		&& (const unsigned char)c <= 'Z');
}
