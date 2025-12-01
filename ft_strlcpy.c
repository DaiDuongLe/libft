#include <stddef.h>

static size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t srclen;

	srclen = ft_strlen(src);
	i = 0;
	while (i < srclen && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
