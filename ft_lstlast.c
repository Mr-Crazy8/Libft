/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:22:15 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/01 13:54:01 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// typedef struct	s_list
// {
// 	void	*content;
// 	struct s_list	*next;
// }	t_list;


//t_list *ft_lstnew(void  *content)
//{
 //   t_list *new_node = (t_list *)malloc(sizeof(t_list));
  //  if(new_node == NULL)
	//{
  //      return NULL;
   // }
  //  new_node->content = content;
  //  new_node->next = NULL;
  //  return new_node;
//}

t_list *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return NULL;
    while(lst->next != NULL)
    {
		lst = lst->next;
	}
	return lst;
}
//int main()
//{
//    t_list  *head =ft_lstnew(malloc(sizeof(int)));
//    *(int *)head->content = 1;
 //
 //   head->next = ft_lstnew(malloc(sizeof(int)));
 //   *(int *)head->next->content = 2;
 //
 //   head->next->next = ft_lstnew(malloc(sizeof(int)));
   // *(int *)head->next->next->content = 3;
   //
  //  t_list *last_node = ft_lstlast(head);
   // if(last_node != NULL)
   // {
    //    printf("the last : %d\n", *(int *)last_node->content);
   // }
   // else
   //     printf("empty\n");
  //  t_list *current = head;
  //  while (current != NULL)
	//{
   //     t_list *next = current->next;
  //      free(current->content);
  //      free(current);
 //       current = next;
 //  }
//}
