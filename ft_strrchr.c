/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:03:43 by yugao             #+#    #+#             */
/*   Updated: 2024/01/12 18:44:40 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen (str);
	if (c == '\0')
		return ((char *)&str[len]);
	while (len > 0)
	{
		if (str[len] == c)
			break ;
		len --;
	}
	if (str[len] == c)
		return ((char *)&str[len]);
	else
		return (0);
}
