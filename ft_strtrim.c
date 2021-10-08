#include "libft.h"

#include <stdlib.h>

/* returns 1 if char c is found in string s. */
static int	m_str_contains(const char *s, const int c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

/* returns the amount of characters in s1 that are not in set. */
static void	m_strtrim_precount(char const *s1, char const *set, size_t *start, size_t *end)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len && m_str_contains((const char *)set, s1[i]))
	{
		i++;
	}
	*start = i;
	i = len;
	while (i > 0)
	{
		i--;
		if (!m_str_contains((const char *)set, s1[i]))
			break ;
	}
	if (i < *start)
		i = *start;
	*end = i;
}

/* creates a new string from s1 with only characters that
 * do not appear in string set. */
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	start;
	size_t	end;
	size_t	i;

	m_strtrim_precount(s1, set, &start, &end);
	ret = malloc((end - start + 1) + 1);
	if (ret == NULL)
		return (ret);
	i = start;
	while (i <= end)
	{
		ret[i - start] = s1[i];
		i++;
	}
	ret[i - start] = 0;
	return (ret);
}
