/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    operations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:26:49 by amsaoub           #+#    #+#             */
/*   Updated: 2022/12/21 17:57:20 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void sa (t_list **lst)
{
	int 	temp;
	t_list *t;

	write(1,"sa\n",3);
	t = (*lst);
	temp = t->data;
	t->data = t->next->data;
	t->next->data = temp;
}
void sb (t_list **lst)
{
    int temp;
    t_list *t;

	write(1,"sb\n",3);
    t = *lst;
    temp = t -> data;
    t->data = t->next->data;
    t -> next -> data = temp;
}
void ss(t_list **lsta, t_list **lstb)
{
	int 	temp;
	t_list *t;
	int 	tempp;
	t_list *tt;

	write(1,"ss\n",3);
	t = (*lsta);
	temp = t->data;
	t->data = t->next->data;
	t->next->data = temp;
	tt = (*lstb);
	tempp = tt->data;
	tt->data = tt->next->data;
	tt->next->data = tempp;
}
void pa (t_list **a, t_list **b)
{
    int temp ;
    t_list *del;

	write(1,"pa\n",3);
    del = *b; 
    temp = (*b) -> data;
    ft_lstadd_front(a,ft_lstnew(temp));
	if((*b)->next == *b)
	{
		(*b)=NULL;
	}
	else
	{
		(*b)->prev->next = (*b)->next;
		(*b)->next->prev =(*b)->prev;
		(*b)=(*b)->next;
	}

	// if((*b)->next == *b)
	// {
	// 	(*b)->next=NULL;
	// 	(*b)->prev=NULL;
	// }
    free(del);
}
void pb (t_list **a, t_list **b)
{
    int temp ;
    t_list *del;

	write(1,"pb\n",3);
    del = *a; 
    temp = (*a) -> data;
    ft_lstadd_front(b,ft_lstnew(temp));
    (*a)->prev->next = (*a)->next;
    (*a)->next->prev =(*a)->prev;
    (*a)=(*a)->next;
	if((*a)->next == *a)
	{
		(*a)->next=NULL;
		(*a)->prev=NULL;
	}
    free(del);
}
void ra (t_list **lst)
{
	write(1,"ra\n",3);
	*lst = (*lst) -> next;
}
void rb (t_list **lst)
{
	write(1,"rb\n",3);
	*lst = (*lst) -> next;
}
void rr(t_list **lsta, t_list **lstb)
{
	write(1,"rr\n",3);
	*lsta = (*lsta) -> next;
	*lstb = (*lstb) -> next;
}
void rra (t_list **lst)
{
	write(1,"rra\n",4);
	(*lst) = (*lst) -> prev;
}
void rrb (t_list **lst)
{
	write(1,"rrb\n",4);
	(*lst) = (*lst) -> prev;
}
void rrr(t_list **lsta, t_list **lstb)
{
	write(1,"rrr\n",4);
	(*lsta) = (*lsta) -> prev;
	(*lstb) = (*lstb) -> prev;
}
