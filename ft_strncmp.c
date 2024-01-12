/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:31:05 by yugao             #+#    #+#             */
/*   Updated: 2024/01/12 05:50:47 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (--n && s1 && s2 && *s1 == *s2)
	{
		if (*s1 != *s2)
			break ;
		s1 ++;
		s2 ++;
	}
	return ((int)(*s1 - *s2));
}

/*
int	main(void)
{
	const char *s1 = "test\200";
	const char *s2 = "test\0";
	int result = ft_strncmp(s1, s2, 5);
	int r2 = strncmp (s1, s2, 5);

	printf ("re : %d\n", result);
	printf ("re2 : %d", r2);
}
*/