#include <stdio.h>

int	word_count(const char *s, char c);

int	main(void)
{
	printf("%d\n", word_count("", ' '));
}

int	word_count(const char *s, char c)
{
	int	count;

	while (*s == c)
		s++;
	count = 0;
	while(*s)
	{
		if ((*s == c || *(s + 1) == '\0') && *(s - 1) != c)
			count++;
		s++;

	}
	return (count);
}
