/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:58:16 by yugao             #+#    #+#             */
/*   Updated: 2024/01/12 17:31:20 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	a_strstr(const char *haystack, const char *needle, size_t s)
{
	size_t		i;
	size_t		len;
	const char	*n;

	len = ft_strlen (needle);
	i = 0;
	n = needle;
	while (*haystack && i < s)
	{
		i ++;
		if (*n == *haystack && !*(n + 1))
			return (i - len);
		else if (*n == *haystack)
			n ++;
		else
			n = needle;
		haystack ++;
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
	p = a_strstr (haystack, needle, len);
	if (!needle || !*needle)
		return ((char *)&haystack[0]);
	if ((p + len_n) <= len)
		return ((char *)&haystack[p]);
	else
		return (0);
}

/*
int main(void)
{
	char str1[] = "123456789";
	char str2[] = "9";

	printf ("%s\n", ft_strnstr(str1, str2, 9));
	printf ("%s\n", strnstr(str1, str2, 9));
}
*/