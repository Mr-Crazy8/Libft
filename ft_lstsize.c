/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:00:33 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/01 12:00:37 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// typedef struct s_list
// {
// 	void	*content;
// 	struct s_list	*next;
// }	t_list;
int ft_lstsize(t_list *lst)
{
	int i = 0;
	while(lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return i;
}

//int main()
//{
//	t_list node0;
//	t_list node1;
//	t_list node2;
//	t_list node3;
//
//	node0.content = NULL;
//    node0.next = &node1;
//
 //   node1.content = NULL;
//	node1.next = &node2;
//
 //   node2.content = NULL;
 //   node2.next = &node3;
//
 //   node3.content = NULL;
  //  node3.next = NULL;
//
//	int nbr = ft_lstsize(&node0);
//
//	printf("%d\n", nbr);
//}
