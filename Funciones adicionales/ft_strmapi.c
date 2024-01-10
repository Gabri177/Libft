#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*fin;

	i = 0;
	len = ft_strlen ((char *)s);
	fin = (char *) malloc (sizeof (char) * (len + 1));
	if (!fin)
		return (0);
	while (i < len)
	{
		fin[i] = f (i, s[i]);
		i ++;
	}
	fin[i] = '/0';
	return (fin);
}