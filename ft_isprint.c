#include "libft.h"

/* checks if c is a printable ASCII character.
 * starts from space, ends in delete. */
int	ft_isprint(int c)
{
	return (c >= 0x20 && c <= '~');
}
