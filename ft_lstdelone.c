#include <stdlib.h>
#include <stdio.h>

typedef struct	s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
	{
		return;
	}
	else
	{
		del(lst->content);
	}
    free(lst);

}
