#include "libft.h"

#include <unistd.h> /* write */
#include <stdlib.h> /* malloc */

#define MAX_INT_STRING_LEN (12)

/* CURSED IMPLEMENTATION: I don't want to write the same code twice,
 * but I cannot use malloc for putnbr, so I came up with a struct
 * instead. */
typedef struct s_itoa_str
{
	char		data[MAX_INT_STRING_LEN];
	int			length;
}				t_itoa_str;

static void	m_inverse_string(char *s, int len)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = len - 1;
	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
}

static t_itoa_str	m_itoa(int n)
{
	t_itoa_str	t;
	int			i;
	int			is_negative;

	i = 0;
	is_negative = 0;
	if (n == 0)
		t.data[i++] = '0';
	else if (n < 0)
	{
		is_negative = 1;
		t.data[i++] = -(n % -10) + '0';
		n /= -10;
	}
	while (n > 0)
	{
		t.data[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (is_negative)
		t.data[i++] = '-';
	t.data[i++] = 0;
	m_inverse_string((char *)&t.data, i - 1);
	t.length = i;
	return (t);
}

char	*ft_itoa(int n)
{
	t_itoa_str	t;
	char		*ret;

	ret = malloc(MAX_INT_STRING_LEN);
	if (ret == NULL)
		return (ret);
	t = m_itoa(n);
	return (ft_memcpy(ret, (char *)&t.data, t.length));
}

void	ft_putnbr_fd(int n, int fd)
{
	t_itoa_str	t;

	t = m_itoa(n);
	write(fd, (char *)&t.data, t.length);
	printf("\n");
}

int main()
{
	ft_putnbr_fd(0, 1);
	ft_putnbr_fd(1, 1);
	ft_putnbr_fd(342, 1);
	ft_putnbr_fd(-234, 1);
	ft_putnbr_fd(-234, 1);
	ft_putnbr_fd(0x7fffffff, 1);
	ft_putnbr_fd(0x80000000, 1);
	return (0);
}

#undef MAX_INT_STRING_LEN
