/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:46:59 by yugao             #+#    #+#             */
/*   Updated: 2024/01/11 18:57:54 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int		count;
	char	*index;

	count = 0;
	index = str;
	while (*index != '\0')
	{
		count ++;
		index ++;
	}
	return (count);
}
