#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);

int main()
{
	size_t	LEN = 0x20123455;
	char	*src;
	char	*dst;
	size_t	len;

	
	src = "LJEFLJLSDJKLADSFLJADLSFJ\n";
	len = strlen(src);
	dst = malloc(len + 1);
	dst[len] = 0;
	ft_memcpy(dst, src, strlen(src));
	printf("%s, %d\n", dst, ft_memcmp(src, dst, len));
	dst[1] = 'j';
	printf("%s, %d\n", dst, ft_memcmp(src, dst, len));


	len = LEN;
	src = malloc(len);
	dst = malloc(len);
	src[len - 5] = 38;
	src[4234] = 3;
	dst[len - 63555] = 2;
	ft_memcpy(dst, src, len);
	printf("%d\n", ft_memcmp(src, dst, len));
	dst[322] = 20;
	printf("%d\n", ft_memcmp(src, dst, len));

	return (0);
}