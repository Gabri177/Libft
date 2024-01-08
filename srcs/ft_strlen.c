/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:46:59 by yugao             #+#    #+#             */
/*   Updated: 2023/11/10 12:32:11 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
