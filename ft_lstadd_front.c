/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <anel-men@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 09:51:10 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/02 16:28:39 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

typedef	struct s_list
{
	void	*content;
	struct s_list *next;
}	t_list;

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return;
	new->next = *lst;
	*lst = new;
}
