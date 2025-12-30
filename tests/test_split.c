#include <stdio.h>
#include "../ft_split.c"
#include <stdlib.h>

int	main(void)
{
	char	**arr;

	const char	*str = "hi byei.";
//	const char	*str = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
	char	delim = 'i';
	arr = ft_split(str, delim);
	while (*arr != NULL)
	{
		puts(*arr);
		arr++;
	}
	//free_strs(arr, word_count(str, delim));
}
