#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b;

	b = (unsigned char *) s;
	while (n--)
		if (*b++ == (unsigned char) c)
			return ((void *) b - 1);
	return (NULL);
}
