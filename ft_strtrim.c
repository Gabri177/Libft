/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:45:53 by yugao             #+#    #+#             */
/*   Updated: 2024/01/12 05:43:17 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *str, const char *chars_to_trim)
{
	int		hash[257];
	size_t	len;
	char	*result;

	ft_memset (hash, 0, 256);
	while (*chars_to_trim)
	{
		hash[(int)(*chars_to_trim % 256)] = 1;
		chars_to_trim ++;
	}
	while (hash[(int)(*str % 256)] == 1)
		str ++;
	len = ft_strlen ((char *)str);
	while (hash[(int)(str[len - 1] % 256)] == 1)
		len --;
	result = (char *) malloc (sizeof (char) * len);
	if (!result)
		return (0);
	ft_strlcpy (result, (char *)str, len + 1);
	return (result);
}

/*
int main ()
{
	char t1[] = "  1111777555dfd2223331111   ";
	char t2[] = "1 7 5 d";
	char *fin;

	fin = strtrim (t1, t2);
	printf ("---%s---\n", fin);
	return 0;
}
*/