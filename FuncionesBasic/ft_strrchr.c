#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	const char	*p;

	p = 0;
	while (*str)
	{
		if (*str == c)
			p = str;
		str ++;
	}
	return ((char *)p);
}