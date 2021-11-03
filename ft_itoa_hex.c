#include "libft.h"

#include <stdlib.h>

/* sets a hex string to s based on single byte b.
 * At the first char we merely need to shift it as the
 * result of shifting itself removes the other nibble. */
static void	m_itoa_hex_byte(char *s, const unsigned char b)
{
	const char	*HEX = "0123456789abcdef";

	s[0] = HEX[b >> 4];
	s[1] = HEX[b & 0x0f];
}

static char	*m_create_str(const char *s, const size_t len)
{
	char	*ret;

	ret = malloc((len + 1) * sizeof(char));
	if (ret != NULL)
	{
		ft_memcpy(ret, s, len);
		ret[len] = 0;
	}
	return (ret);
}

/* does itoa for a size_t, but in hexadecimal. */
char	*ft_itoa_hex_size_t(size_t nbr)
{
	char	s[sizeof(size_t) * 2];
	size_t	i;
	size_t	j;

	i = 0;
	j = (sizeof(size_t) - 1) * 2;
	while (i < sizeof(size_t))
	{
		m_itoa_hex_byte((s + j), ((unsigned char *)&nbr)[i]);
		i++;
		j -= 2;
	}
	i = 0;
	while (i < sizeof(size_t) * 2 - 1 && s[i] == '0')
	{
		i++;
	}
	return (m_create_str(s + i, sizeof(size_t) * 2 - i));
}
