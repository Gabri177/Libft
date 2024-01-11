/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:45:53 by yugao             #+#    #+#             */
/*   Updated: 2024/01/11 18:55:36 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strtrim(const char *str, const char *chars_to_trim)
{
	int		hash[129];
	size_t	len;
	char	*result;

	ft_memset (hash, 0, 129);
	while (*chars_to_trim)
	{
		hash[*chars_to_trim] = 1;
		chars_to_trim ++;
	}
	while (hash[*str] == 1)
		str ++;
	len = ft_strlen ((char *)str);
	while (hash[str[len - 1]] == 1)
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