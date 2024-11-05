#include <stdlib.h>
#include <stdio.h>

typedef	struct s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;


void	ft_lstclear(t_list **lst, void (*del)(void *))
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
