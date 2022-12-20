/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:08:16 by amsaoub           #+#    #+#             */
/*   Updated: 2022/12/20 12:42:58 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
void the_best_head (t_list **head)
{
	printf("the_best_head\n");
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
        printf("%d\n",temp->sin);
        temp = temp ->next;
        if(temp == *head)
        break;
    }
}

void find_max (t_list **head)
{
	printf("find_max\n");
	printf(" head = %d\n", (*head)->data);
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
	printf(" head = %d\n", (*head)->data);
}

void zero_one (t_list **head)
{
	printf("zero_one\n");	
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
			printf("%d - %d\n",temp->data , temp->push);
			temp = temp ->next;
			if(temp == *head)
			break;
		}
}

void push_zero_to_b(t_list **heada ,t_list **headb)
{
	printf("push_zero_to_b\n");	
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