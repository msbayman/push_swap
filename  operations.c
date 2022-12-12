/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    operations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:26:49 by amsaoub           #+#    #+#             */
/*   Updated: 2022/12/12 12:59:20 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void sa (t_list **lst)
{
	int temp;
	t_list *t;

	t = *lst;
	temp = t -> data;
	t->data = t->next->data;
	t -> next -> data = temp;
}
void sb (t_list **lst)
{
    int temp;
    t_list *t;

    t = lst;
    temp = t -> data;
    t->data = t->next->data;
    t -> next -> data = temp;
}
void ss(t_list **lsta, t_list **lstb)
{
	sa (*lsta);
	sb (*lstb);
}

void pb (t_list **a, t_list **b)
{
    int temp ;
    t_list *del;

    del = *a; 
    temp = (*a) -> data;
    ft_lstadd_back(b,ft_lstnew(temp));
    (*a)->prev->next = (*a)->next;
    (*a)->next->prev =(*a)->prev;
    (*a)=(*a)->next;
    
    free(del);
    sb(*a);
}

void ra (t_list **lst)
{
	*lst = (*lst) -> next;
}
void rra (t_list **lst)
{
	*lst = (*lst) -> prev;
}