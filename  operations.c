/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    operations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:26:49 by amsaoub           #+#    #+#             */
/*   Updated: 2022/12/26 20:58:00 by amsaoub          ###   ########.fr       */
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
	int k ;

	k = lst_size(b);
	

	write(1,"pa\n",3);
    del = *b; 
    temp = (*b) -> data;
    ft_lstadd_front(a,ft_lstnew(temp));
	(*b)->prev->next = (*b)->next;
	(*b)->next->prev =(*b)->prev;
	
	 (*b)=(*b)->next;
	
	free(del);
	if(k==1)
	{
		(*b)=NULL;
	}
	
	// printf("----dell data : %d\n",(*b)->data);
}

// void    ft_push_a(t_push *push, int bol)
// {
//     t_list    *tmp;

//     if (push->sizeb == 0)
//         return ;
//     tmp = push->headb->next;
//     tmp->prev = push->headb->prev;
//     push->headb->prev->next = tmp;
//     ft_lstadd_front(&push->heada, push->headb);
//     push->headb = tmp;
//     push->pheadb = tmp;
//     push->pheada = push->heada;
//     if (bol)
//         write(1, "pa\n", 3);
//     push->sizea++;
//     push->sizeb--;
// }

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
