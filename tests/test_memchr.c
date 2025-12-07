#include <stdio.h>
#include "../ft_memchr.c"

int	main(void)
{
	char	str[] = "abcdefghijklmnopqrstuvwxyz";
	int	c = '\0';

	if (ft_memchr((void *) str, c, sizeof(str)) == NULL)
		printf("not found\n");
	else if (c == '\0')
		printf("%s\n", (char *) ft_memchr(str, c, sizeof(str)) - sizeof(str) + 1);
	else
		printf("%s\n", (char *) ft_memchr(str, c, sizeof(str)));
}
