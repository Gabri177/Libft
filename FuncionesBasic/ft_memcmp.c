/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:55:52 by yugao             #+#    #+#             */
/*   Updated: 2024/01/11 18:56:19 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	const char	*p1;
	const char	*p2;
	size_t		i;

	i = 0;
	p1 = (char *)ptr1;
	p2 = (char *)ptr2;
	while (i < n && p1[i] && p2[i])
	{
		if (p1[i] == p2[i])
			i ++;
		else
			break ;
	}
	return (p2[i] - p1[i]);
}
