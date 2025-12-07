#include <stdio.h>
#include "../ft_strlcpy.c"

int	main(void)
{
	char	*src = "Hellow";
	char	dst[5];

	printf("%ld\n", ft_strlcpy(dst, src, sizeof(dst)));
	printf("%s\n", dst);
}
