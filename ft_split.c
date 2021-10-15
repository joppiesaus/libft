#include "libft.h"

#include <stdlib.h> /* for malloc() */

/* counts the number of words in s as delimited by c. */
static size_t	m_count_words(const char *s, const int c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != 0)
	{
		while (s[i] != c)
		{
			if (s[i] == 0)
			{
				return (count + 1);
			}
			i++;
		}
		count++;
		while (s[i] == c)
			i++;
	}
	return (count);
}

/* creates and allocs a "word", and updates the index for s. */
static char	*m_create_word(const char *s, const int c, size_t *index)
{
	char	*ret;
	size_t	j;
	size_t	i;
	size_t	len;

	i = *index;
	j = i;
	while (s[i] != c && s[i] != 0)
	{
		i++;
	}
	len = i - j;
	ret = malloc(len + 1);
	if (ret == NULL)
		return (ret);
	i = 0;
	while (i < len)
	{
		ret[i] = s[j + i];
		i++;
	}
	ret[i] = 0;
	*index = j + i;
	return (ret);
}

/* allocates and copies a word, appends it the word array. */
static void	m_copy_to_array(char const *s, const int c,
	char **r, size_t n_words)
{
	size_t	i;
	size_t	current_word;

	i = 0;
	current_word = 0;
	while (s[i] != 0 && current_word < n_words)
	{
		r[current_word] = m_create_word(s, c, &i);
		current_word++;
		while (s[i] == c && s[i] != 0)
			i++;
	}
	r[current_word] = 0;
}

/* makes a null-terminated array of s splitted into words delimited by c.
 * setting chr to 12345 is so that the comparison always fails when 
 * c was actually a null terminator. */
char	**ft_split(char const *s, char c)
{
	char	**ret;
	char	*str;
	size_t	n_words;
	int		chr;

	if (s == NULL)
		return ((char **)s);
	chr = c;
	if (chr == 0)
		chr = 12345;
	str = (char *)s;
	while (*str == chr)
		str++;
	n_words = m_count_words(str, chr);
	ret = malloc((n_words + 1) * sizeof(char *));
	if (ret == NULL)
		return (ret);
	m_copy_to_array(str, chr, ret, n_words);
	return (ret);
}
