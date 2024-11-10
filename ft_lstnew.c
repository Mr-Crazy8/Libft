/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 09:30:03 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/01 09:44:51 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

// typedef struct s_list
// {
// 	void	*content;
// 	struct s_list *next;
// }	t_list;

t_list	*ft_lstnew(void	*content)
{
	t_list *node = (t_list *)malloc(sizeof(t_list));
	if(node == NULL)
		return NULL;
	node->content = content;
	node->next = NULL;

	return node;
}
