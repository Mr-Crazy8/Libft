/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:37:12 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/02 16:26:08 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	else
		temp = *lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}

// int main()
// {
// 	int number_node = 20;
// 	int i = 0;
// 	t_list *node = NULL;
// 	while (i < number_node)
// 	{
// 		ft_lstadd_back(&node, ft_lstnew("20"));
// 		i++;
// 	}
// 	while (node)
// 	{
// 		printf("%s\n", node->content);
// 		node = node->next;
// 	}
// }