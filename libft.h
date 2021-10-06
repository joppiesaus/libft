#include <stddef.h>

#ifndef LIBFT_H
# define LIBFT_H

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

int ft_toupper(int c);
int ft_tolower(int c);

int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char    *ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

size_t  strlcat(char *dst, const char *src, size_t dstsize);
size_t  strlcpy(char *dst, const char *src, size_t dstsize);

#endif
