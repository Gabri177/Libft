#include "libft.h"

char *strjoin(const char *str1, const char *str2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	len1 = ft_strlen ((char *)str1);
	len2 = ft_strlen ((char *)str2);
	if (!str1 || !str2)
		return (0);
	result = (char *) malloc (sizeof (char) * (len1 + len2 + 1));
	if (!result)
		return (0);
	ft_strlcpy (result, str1, len1 + 1);
	ft_strlcat (result, (char *)str2, len1 + len2 + 1);
	return (result);
}

/*
int main (void){
	char t1[] = "hello";
	char t2[] = "world";
	char *r;

	r = strjoin (t1, t2);
	printf ("%s\n", r);
}
*/