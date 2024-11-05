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
typedef	struct	s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;
	if(lst == NULL || new == NULL) // checks if lst (the pointer to the list's start) is empty or invalid. this would mean the function doesn't even know where the list start, so it can't anything.
								   // check if new (the new node we want to add) is empty or invalid. if new is empty, there's nothing to add to the list.
		return;//if lst or new is NULL, this line tells the function to stop running and go back it prevents any mistakes happening if the input is invalid.
	if(*lst == NULL) //check if the start (or "head") of the list is empty. the * symbol lets us look at the actual beginning of the list. it means there's
					 //if *lst is NULL, it means there's no first node, so our list is empty.
	{
		*lst = new; // this line sets new as the first node in the list if the list is empty when the list is empty, the new node we're adding (new) become the first node in the list.
		return;//since we just added new as the first (and only) node, we don't need to do anything else this stops the function from running any further once new is set as the only node in the list.
	}
	else
		temp = *lst; //*temp is a temporary pointer to help us find the end of the list. *lst is the first node in the list, so temp = *lst maked temp point to the first node.
	while(temp->next != NULL) //temp->next looks at the next  node after temp to check if there's another node after temp. if there is another node, thr loop will keep goinf. if there isn't (meaning we're at the last node), the loop will stop.
	{
		temp = temp->next;// makes temp point to the next node this line will keep moving temp forward until we reach the last node.
	}
	temp->next = new; // once the loop stops, temp is at the last node. now we set temp->next to point to new. adding new to temp->next puts new at new at the end of the list, because temp was the last node
}
