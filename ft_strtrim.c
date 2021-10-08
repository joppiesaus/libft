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
static size_t	m_strtrim_precount(char const *s1, char const *set)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s1[i] != 0)
	{
		if (!m_str_contains((const char *)set, s1[i]))
			count++;
		i++;
	}
	return (count);
}

/* creates a new string from s1 with only characters that
 * do not appear in string set. */
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	i;
	size_t	j;

	ret = malloc(m_strtrim_precount(s1, set) + 1);
	if (ret == NULL)
		return (ret);
	i = 0;
	j = 0;
	while (s1[i] != 0)
	{
		if (!m_str_contains((const char *)set, s1[i]))
		{
			ret[j] = s1[i];	
			j++;
		}
		i++;
	}
	ret[j] = 0;
	return (ret);
}
