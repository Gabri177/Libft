#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (!s)
		return (0);
	result = (char *)malloc (sizeof (char) * (len + 1));
	if (!result)
		return (0);
	if (start >= ft_strlen((char *)s))
        return (ft_strdup(""));
	ft_strlcpy (result, &s[start], len + 1);
	return (result);
}

/*
int main() {
    const char *original = "Hello, World!";
    unsigned int start = 12;
    size_t length = 5;

    char *substring = ft_substr(original, start, length);

    if (substring) {
        printf("Substring: %s\n", substring);
        free(substring); // 释放动态分配的内存
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/