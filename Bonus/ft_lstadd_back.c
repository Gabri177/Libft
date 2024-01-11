#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tem;

	tem = *lst;
	if (!*lst)
		*lst = new;
	else
	{
		while (tem->next)
			tem = tem->next;
		tem->next = new;
	}
}