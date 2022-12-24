/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:08:16 by amsaoub           #+#    #+#             */
/*   Updated: 2022/12/24 16:12:58 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
void the_best_head (t_list **head)
{
    t_list *temp;
    t_list *i;
    t_list *j;

    temp = *head;
    while (1)
    {
        i = temp;
        j = temp;
        while (1)
        {
            if (i->data < j->data)
            {
                (temp->sin)++;
                i = j;
            }
            j=j->next;
            if(j == temp)
              break;
        }
        temp = temp->next;
        if(temp == *head)
        break ;
    }
	
    temp = *head;
    while(1)
    {
        temp = temp ->next;
        if(temp == *head)
        break;
    }
}

void find_max (t_list **head)
{
	t_list *temp;
	t_list *h;
	int max;
	temp = *head;
	max = -1;
	 while (1)
    {
		if (max < temp->sin)
		{
			max = temp->sin;
			h = temp;
		}
		temp = temp->next;
        if(temp == *head)
        break ;
    }
		*head = h;
}

void zero_one (t_list **head)
{
	t_list	*i;
	t_list	*temp;
	t_list	*j;
	
	i = *head;
	j = *head;
	temp = *head;
	i->push = 1;
	 while (1)
        {
            if (i->data < j->data)
              {
			   j->push = 1;
			   i= j;
			  } 
            j=j->next;
            if(j == *head)
              break;
        }
	 while(1)
		{
			temp = temp ->next;
			if(temp == *head)
			break;
		}
}

void push_zero_to_b(t_list **heada ,t_list **headb)
{
	t_list *temp;
	
	temp = (*heada);
	while (1)
	{
		if (temp->push == 0)
			pb(&temp,headb);
		else
			ra(&temp);
		if (temp == *heada)
			break;
	}
}

void indexing(t_list **head)
{
	t_list *temp;
	int i;

	i=0;
	temp = *head;
	while (1)
	{
		if(i>lst_size(head)/2)
			temp->push = i - lst_size(head);
		else
			temp->push = i;
		temp=temp->next;
		i++;
		if (temp == *head)
			break;
	}
	
}

void siri_l_a(t_list **heada, t_list **headb)
{
	t_list *tempb;
	t_list *tempa;

	tempb = *headb;
	while (1)//b
	{
	tempa = *heada;
			if (tempb->data > tempa->data && tempb->data < tempa->prev->data)
				tempb->sin = 1;
			else
				tempb->sin = 0;
			tempa=tempa->next;
		tempb=tempb->next;
		if (tempb == *headb)
			break;
	}
	
}

void best_move(t_list **headb, t_list **heada)
{
	
	t_list *tempa;
	t_list *tempb;
	int		j;
	int		i;
	int		bmb;

	bmb = 0;
	tempb = *headb;
	while (1)//b
	{
		i = 0;
		tempa = *heada;
		while (1)//a
		{
			if(tempb->data < tempa->data)
				break ;
			i++;	
			tempa = tempa->next;
			if(tempa == *heada)
				break;
		}
		if(i > lst_size(heada)/2)
			tempb->bma = i - lst_size(heada);
		else
			tempb->bma = i;
			
		if(bmb>lst_size(headb)/2)
				tempb->bmb = bmb - lst_size(headb);
		else	
			tempb->bmb = bmb;
		bmb++;	
		tempb = tempb->next;
		if(tempb == *headb)
			break;
	}
}



// void find_best_move_for_element(t_list *tempb, t_list *heada, int *i)
// {
// 	t_list *tempa;
	
// 	*i = 0;
// 	tempa = heada;
// 	while (1)//a
// 	{
// 		if(tempb->data < tempa->data)
// 			break ;
// 		(*i)++;	
// 		tempa = tempa->next;
// 		if(tempa == heada)
// 			break;
// 	}
// 		if((*i)>lst_size(&heada)/2)
// 				tempb->bma = (*i) - lst_size(&heada);
// }


// void best_move(t_list **headb, t_list **heada)
// {
// 	t_list *tempb;
// 	int		bmb;
// 	int		i;
// 	int		j;

// 	bmb = 0;
// 	tempb = *headb;
// 	while (1)//b
// 	{
// 		find_best_move_for_element(tempb, *heada, &i);
// 		if(i<=(j*-1))
// 			tempb ->bma = i;
// 		else
// 			tempb->bma = (j);
// 		if(bmb>lst_size(headb)/2)
// 				tempb->bmb = bmb - lst_size(headb);
// 		else	
// 			tempb->bmb = bmb;
// 		bmb++;	
// 		tempb = tempb->next;
// 		if(tempb == *headb)
// 			break;
// 	}
// }
int be_positive(int k)
{
	if(k<0)
		return (-k);
	return (k);
}
int sup(int k , int b)
{
	if(k > b)
		return (k);
	return (b);	
}

int best_sum(t_list **headb)
 {
	t_list *temp;
	int	sum;
	
	temp = *headb;
	while (1)
	{
		if(temp->bma < 0 && temp->bmb < 0)
			temp->sum = sup(be_positive(temp->bma) , be_positive(temp->bmb));
		else if(temp->bma > 0 && temp->bmb > 0)
			temp->sum = sup(be_positive(temp->bma) , be_positive(temp->bmb));
		else
			temp->sum = be_positive(temp->bma) + be_positive(temp->bmb);
		temp=temp->next;
		if(temp == *headb)
			break;
	}
	sum = (*headb)->sum;
	temp = *headb;
	while (1)
	{
		if(sum < temp->sum)
				sum = temp->sum;
		if(temp == *headb)
			break;
	}
	return (sum);
 }

 void final_push(t_list **heada ,t_list **headb)
 {
	int best_index;
	t_list *tempb;
	
	tempb = *headb;
	best_index = best_sum(headb);
	while (1)
	{
		if(best_index == tempb->sum)
		break;
		tempb = tempb ->next;
	}
	while(tempb->bma > 0 && tempb->bmb > 0)
	{
		rr(heada,headb);
		(tempb->bma)--;
		(tempb->bmb)--;
	}
	final_push2(heada ,headb ,tempb);
 }
 
 void final_push2(t_list **heada ,t_list **headb ,t_list *tempb)
 {
	while(tempb->bma < 0 && tempb->bmb < 0)
	{
		rrr(heada,headb);
		(tempb->bma)++;
		(tempb->bmb)++;
	}
	while (tempb ->bmb < 0)
	{
		rrb(headb);
		(tempb->bmb)++;
	}
	
	while (tempb ->bmb > 0)
	{
		rb(headb);
		(tempb->bmb)--;
	}
final_push3(heada ,headb ,tempb);
	
 }
 
void final_push3(t_list **heada ,t_list **headb ,t_list *tempb)
 {
	
	while (tempb->bma > 0)
	{
		ra(heada);
		(tempb->bma)--;
	}
	while (tempb->bma < 0)
	{
		rra(heada);
		(tempb->bma)++;
	}
		pa(heada,headb);
}

