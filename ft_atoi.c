#include "libft.h"

/* checks if c is a whitespace character.
 * `switch' would have been perfect here xD */
static int	m_isspace(int c)
{
	return (c == ' '
		|| c == '\n'
		|| c == '\t'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r');
}

/* gets the offset of where there is no longer whitespace in string s */
static unsigned int	m_get_space_offset(const char *s)
{
	unsigned int	n;

	n = 0;
	while (m_isspace(s[n]))
	{
		n++;
	}
	return (n);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	flip_sign_at_end;

	res = 0;
	flip_sign_at_end = -1;
	str += m_get_space_offset(str);
	if (*str == '-')
	{
		str++;
		flip_sign_at_end = 1;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res -= *str - '0';
		str++;
	}
	return (res * flip_sign_at_end);
}
