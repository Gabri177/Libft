/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:58:16 by yugao             #+#    #+#             */
/*   Updated: 2024/01/12 13:28:15 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strstr(const char *haystack, const char *needle, size_t s)
{
	size_t		i;
	size_t		len;
	const char	*n;

	len = ft_strlen (needle);
	i = 0;
	n = needle;
	while (*haystack && i < s)
	{
		if (!*n)
			return (i - len);
		else if (*n == *haystack)
			n ++;
		else
			n = needle;
		haystack ++;
		i ++;
	}
	if (s > ft_strlen (haystack))
		return (s);
	else
		return (ft_strlen (haystack));
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_n;
	size_t	p;

	len_n = ft_strlen ((char *)needle);
	p = ft_strstr (haystack, needle, len);
	if (!needle || !*needle)
		return ((char *)&haystack[0]);
	if ((p + len_n - 1) <= len)
		return ((char *)&haystack[p]);
	else
		return (0);
}

/*
int main(void)
{
	char str1[] = "Hello whoe";
	char str2[] = "";

	printf ("\n%s\n", ft_strnstr("lorem ipsum dolor sit amet", "", 10));
	printf ("\n%s\n", strnstr("lorem ipsum dolor sit amet", "", 10));
}
*/