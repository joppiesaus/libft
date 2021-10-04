#include <stdlib.h>

/* TODO: check & smart alloc */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	n;
	size_t	ret_i;
	char	*ret;

	n = 0;
	ret_i = 0;
	while (s[n] != 0 && n != start)
		n++;
	if (s[n] == 0)
		len = 0;
	ret = malloc(len + 1);
	if (ret == NULL)
		return (ret);
	while (s[n] != 0 && ret_i < len)
	{
		ret[ret_i] = s[n];
		n++;
		ret_i++;
	}
	ret[ret_i] = 0;
	return (ret);
}


#include <stdio.h>
int main()
{
	printf("%s\n", ft_substr("jeff", 1, 2));
	printf("%s\n", ft_substr("jeff", 0, 5));
	printf("%s\n", ft_substr("jefffffffffff", 9, 5));
	printf("%s\n", ft_substr("jefffffffffff", 93, 5));
	printf("%s\n", ft_substr("jefffffffffff", 93, 0));

	
	return (0);
}
