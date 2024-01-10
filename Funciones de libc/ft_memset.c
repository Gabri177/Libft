

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
    size_t	i;
    char	*temp;

    i = 0;
    temp = (char *)b;
    while (i < len)
    {
        temp[i] = (char)c;
        i ++;

    }
    return (b);
}