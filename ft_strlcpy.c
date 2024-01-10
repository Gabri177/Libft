#include <stdio.h>

size_t strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i  = 0;
	while (i < size - 1 && *dest)
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (i);
	
}