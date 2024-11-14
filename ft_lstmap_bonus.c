/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 09:51:20 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/14 09:29:53 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_clear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || *lst == NULL)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}

static t_list	*ft_create_node(void *content, void (*del)(void *))
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	if (new_node->content == NULL)
	{
		del(new_node->content);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current;
	t_list	*new_node;

	if (lst == NULL || f == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		new_node = ft_create_node(f(lst->content), del);
		if (new_node == NULL)
		{
			ft_clear(&new_list, del);
			return (NULL);
		}
		if (new_list == NULL)
			new_list = new_node;
		else
			current->next = new_node;
		current = new_node;
		lst = lst->next;
	}
	return (new_list);
}
