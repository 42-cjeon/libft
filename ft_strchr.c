#include "libc.h"

char *ft_strchr(const char *s, int c)
{
	char find_char;

	find_char = (char)c;
	while(*s != '\0')
	{
		if (*s == find_char)
			return ((char *)s);
		s++;
	}
	if (find_char == '\0')
		return ((char *)s);
	return (NULL);
}