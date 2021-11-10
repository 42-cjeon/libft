#include "libc.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char byte;
	char *memory;
	size_t i;

	byte = (unsigned char)c;
	memory = (char *)b;
	i = 0;
	while(i < len)
	{
		memory[i] = byte;
		i++;
	}

	return (b);
}