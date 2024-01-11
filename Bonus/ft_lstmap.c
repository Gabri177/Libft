#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newList;
	t_list	*newNudo;

	if (!lst || !f || !del)
		return (NULL);
	newList = NULL;
	while (lst)
	{
		newNudo = ft_lstnew (f (lst->content));
		if (!newNudo)
		{
			ft_lstclear (newList, del);
			return (NULL);
		}
		ft_lstadd_back (newList, newNudo);
		lst = lst->next;
	}
	return (newList);
}