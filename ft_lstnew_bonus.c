#include "libft.h"

#include <stdlib.h> /* malloc, free */

t_list	*ft_lstnew(void *content)
{
	t_list	*li;

	li = malloc(sizeof(t_list));
	if (li == NULL)
	{
		return (li);
	}
	li->content = content;
	li->next = NULL;
	return (li);
}
