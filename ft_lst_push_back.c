#include "libft.h"
#include <stdlib.h>

void	ft_lst_push_back(t_list **begin_list, void *data, size_t size)
{
	t_list *elem;
	t_list *tmp;

	elem = ft_lstnew(data, size);
	tmp = *begin_list;
	if (!(*begin_list))
		*begin_list = elem;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		(tmp)->next = elem;
	}
}
