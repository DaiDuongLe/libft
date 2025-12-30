#include <stdio.h>
#include "../ft_strtrim.c"

int	main(void)
{
	puts(ft_strtrim("faf", "f"));
	puts(ft_strtrim("af", "f"));
	puts(ft_strtrim("fa", "f"));
	puts(ft_strtrim("faaf", "f"));
	puts(ft_strtrim("aaf", "f"));
	puts(ft_strtrim("faa", "f"));
	puts(ft_strtrim("ffffaffff", "f"));
	puts(ft_strtrim("ffffa", "f"));
	puts(ft_strtrim("affff", "f"));
	puts(ft_strtrim("a", "a"));
	puts(ft_strtrim("aa", "a"));
	puts(ft_strtrim("aaa", "a"));
	puts(ft_strtrim("aaaa", "a"));

	puts(ft_strtrim(" aaaa ", " "));
	puts(ft_strtrim("\t aafaa \t", " \tf"));
}
