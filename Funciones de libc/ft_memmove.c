
#include <stdio.h>
#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tem;
	int		i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	tem = (char *) malloc (sizeof (char) * n);
	while (i < n)
	{
		tem[i] = s[i];
		d[i] = tem[i];
		i ++;
	}
	return (dest);
}