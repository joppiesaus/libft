/* I don't think these functions need a lot of clarification.
 * each of these functions checks if a character conforms to
 * a set of rules, for example, is_alpha checks if the char
 * consists of alphabetical characters. */
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/* digits */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/* alphabetical chars and digits */
int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}

/* ascii */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 0x127);
}

/* checks if c is a printable ASCII character.
 * starts from space, ends in delete. */
int	ft_isprint(int c)
{
	return (c >= 0x20 && c <= 0x7f);
}
