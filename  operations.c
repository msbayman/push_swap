/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    operations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:26:49 by amsaoub           #+#    #+#             */
/*   Updated: 2022/12/11 17:45:25 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

sa (t_list **lst)
{
	int temp;
	t_list *t;

	t = *lst;
	temp = t -> data;
	t->data = t->next->data;
	t -> next -> data = temp;
}
sb (t_list **lst)
{
	int temp;
	t_list *t;

	t = *lst;
	temp = t -> data;
	t->data = t->next->data;
	t -> next -> data = temp;
}
ra (t_list **lst)
{
	*lst = (*lst) -> next;
}
rra (t_list **lst)
{
	*lst = (*lst) -> prev;
}
pb (t_list **a, t_list **b)
{
	int temp ;
	t_list *del;

	del = *b; 
	temp = (*a) -> data;
	ft_lstadd_back(*b,ft_lstnew(temp));
	sb(*a);
	(*a)->prev->next = (*a)->next;
	(*a)->next->prev =(*a)->prev;
	(*a)=(*a)->next;
	free(del);
}