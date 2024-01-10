#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (i < n && *s)
	{
		if (*s == c)
			return (s);
		i ++;
		s ++;
	}
	return (0);
}