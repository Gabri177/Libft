#include "libft.h"

void *ft_calloc(size_t num_elements, size_t element_size)
{
	char	*fin;
	size_t	i;

	i = 0;
	fin = (char *) malloc (element_size * num_elements);
	if(!fin)
		return (0);
	while (i < num_elements * element_size)
		fin[i++] = 0;
	return ((void *)fin);
}
