#include "libft.h"

int	count_sep(char *s, char c)
{
	int	num;

	num = 0;
	while (*s == c)
		s ++;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || !*(s + 1)))
			num ++;
		s ++;
	}
	return (num);

}

char	*creStr(char *start, char c)
{
	int 	len;
	char	*fin;

	len = 0;
	while (start[len] != c)
		len ++;
	fin = (char *) malloc (sizeof (char) * (len + 1));
	if (!fin)
		return (0);
	ft_strlcpy (fin, start, len + 1);
	return (fin);
}

char **ft_split(char const *s, char c)
{
	char	**fin;
	int		len;
	int		i;

	i = 0;
	len = count_sep ((char *)s, c);
	fin = (char **) malloc (sizeof (char *) * (len + 1));
	if (!fin)
		return (0);
	while(i < len)
	{
		while (*s == c)
			s ++;
		fin[i++] = creStr ((char *)s, c);
		while (*s != c)
			s ++;
	}
	fin[i] = 0;
	return (fin);
}

/*
int main() {
    char const *input_string = "   This is a test string to split   ";
    char delimiter = 't';
    
    // 使用 ft_split 函数拆分字符串
    char **result = ft_split(input_string, delimiter);

    if (result) {
        // 遍历并打印拆分后的字符串数组
        for (int i = 0; result[i] != NULL; i++) {
            printf("Token %d: %s\n", i, result[i]);
        }

        // 释放分配的内存
        for (int i = 0; result[i] != NULL; i++) {
            free(result[i]);
        }
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/
