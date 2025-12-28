#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*arr;
	size_t			i;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	//check school man page for overflow handling
	arr = (unsigned char *) malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
		arr[i++] = '\0';
	return (arr);
}
