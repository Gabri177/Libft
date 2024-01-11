#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*pre;

	while (*lst)
	{
		pre = *lst;
		*lst = (*lst)->next;
		del(pre->content);
		free(pre);
	}
	*lst = NULL;
}