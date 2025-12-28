#include <stdio.h>
#include "../ft_strmapi.c"

char	ft_toupper(unsigned int i, char c)
{
	printf("%c-%d ", c, i);
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	puts(ft_strmapi("gooD morning", &ft_toupper));
}
