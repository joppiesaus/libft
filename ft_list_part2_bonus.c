#include "libft.h"

#include <stdlib.h> /* free */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	void	*temp_content;

	new = NULL;
	while (lst)
	{
		temp_content = f(lst->content);
		if (temp_content)
		{
			ft_lstadd_back(&new, ft_lstnew(temp_content));
		}
		else
		{
			del(ft_lstnew(temp_content));
		}
		lst = lst->next;
	}
	return (new);
}
