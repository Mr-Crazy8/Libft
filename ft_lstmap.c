#include <stdlib.h>
#include <stdio.h>
#include "libft.h"


static void    ft_clear(t_list **lst, void (*del)(void *))
{
    t_list *temp;

    if(lst == NULL || *lst == NULL)
        return;
    while(*lst != NULL)
    {
        temp = (*lst)-> next;
        del((*lst)->content);
        free(*lst);
        *lst = temp;
    }
    *lst = NULL;
}

t_list *ft_lstmap(t_list *lst, void *(*f) (void *), void (*del)(void *))
{
	if (lst == NULL || f == NULL)
	{
		return NULL;
	}
	t_list *new_list = NULL;
	t_list *current = NULL;
	t_list *new_node = NULL;
	while (lst != NULL)
	{
		new_node = (t_list *)malloc(sizeof(t_list));
		if (new_node == NULL)
		{
            ft_clear(&new_list, del);
			return NULL;
		}
		new_node->content = f(lst->content);
		if (new_node->content == NULL)
		{
			del(new_node);
            ft_clear(&new_list, del);
            return NULL;
		}
		if (new_list == NULL)
		{
			new_list = new_node;
		}
		else
		{
			current->next = new_node;
		}
		current = new_node;
		lst = lst->next;
	}
    if (current != NULL)
        current->next = NULL;
	return new_list;
}
