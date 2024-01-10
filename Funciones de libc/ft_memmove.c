
#include <stdio.h>
#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (*d && *s)
		return (0);
	if (d > s)
		while (n-- > 0)
			d[n - 1] = s[n - 1];
	else
		while (i++ < n)
			d[i] = s[i];
	return (dest);
}