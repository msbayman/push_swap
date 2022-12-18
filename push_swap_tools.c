/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:08:16 by amsaoub           #+#    #+#             */
/*   Updated: 2022/12/18 18:46:42 by amsaoub          ###   ########.fr       */
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
		j = i;
		while (j->next != temp)
		{
			if (i->data < j->data)
			{
				(i->sin)++;
				i = j;
				j = j->next;
			}
			else
			j=j->next;
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