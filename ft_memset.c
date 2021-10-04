void	*ft_memset(void *b, int c, size_t len)
{
	size_t				n;
	const unsigned char	ch;

	n = 0;
	ch = (unsigned char)c;
	while (n < len)
	{
		b[n] = ch;
	}
	return (b);
}
