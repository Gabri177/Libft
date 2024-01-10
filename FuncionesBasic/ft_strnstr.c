#include "libft.h"

int	ft_strstr(const char *haystack, const char *needle)
{
	size_t		i;
	const char	*n;

	i = 0;
	n = needle;
	while (*haystack)
	{
		if (!*n)
			return (i);//return (-- haystack);
		else if (*n == *haystack)
			n ++;
		else
			n = needle;
		haystack ++;
		i ++;
	}
	return (0);

}

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_n;
	size_t	p;

	len_n = ft_strlen ((char *)needle);
	p = ft_strstr (haystack, needle);
	if ((p + len_n - 1) <= len && p != 0)
		return ((char *)&haystack[p - 1]);
	else
		return (0);
}


int main(void)
{
	char str1[] = "Hello whoe";
	char str2[] = "w";
	char *str3;

	str3 = ft_strnstr(str1, str2, 5);
	printf ("\n%s\n", str3);
}

