#include <stdio.h>

int ft_toupper(int c);
int ft_tolower(int c);

#define TEST(c) (printf("%c: %c, %c\n", c, ft_toupper(c), ft_tolower(c)))

int main()
{
    TEST('a');
    TEST('9');
    TEST(0);
    TEST('a');
    TEST('A');
    TEST('Z');
    TEST('D');
    TEST('f');
    TEST('0');
    TEST(' ');
    TEST('\v');
    TEST('a');
    return (0);
}