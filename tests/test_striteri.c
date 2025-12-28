#include <stdio.h>
#include "../ft_striteri.c"

void	ft_toupper(unsigned int i, char *c)
{
	printf("%c-%d ", *c, i);
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

int	main(void)
{
	char	str[] = "0ello";
	ft_striteri(str, &ft_toupper);
	puts(str);
}
