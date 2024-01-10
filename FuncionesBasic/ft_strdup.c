#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*new;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen ((char *)str);
	new = (char *) malloc (sizeof (char) * (len + 1));
	if (!new)
		return (0);
	while (i++ < len)
		new[i] = str[i];
	new[i] = '\0';
	return (new);
}