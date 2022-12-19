/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:25:50 by amsaoub           #+#    #+#             */
/*   Updated: 2022/12/19 12:45:19 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"



int main(int ac , char **av)
{
	char	**tab;
	int		i;
	t_list	*head;
	t_list *h;
	
	if (ac==1)
		return write(1,"Error",5);
	else 
	{
		i = 0;	
		head = NULL;
		printf("==============\n");
		tab = ft_split(ft_strjoin(ac-1, av + 1, " "),' ');

		if (!check_nul(tab,ac))
		return write(1, "Error\n", 6);
		
		
		if (!checkint(tab) || !check_max_min(tab) || !check_duplicates(tab))
			return write(1, "Error\n", 6);
	
	
		while(tab[i])
			ft_lstadd_back(&head,ft_lstnew(ft_atoi(tab[i++])));

		i = 0;
		printf("list is :\n");
		while(tab[i])
		{
			printf("%d\n",head->data);
			head = head->next;
			i++;
		}
	}
	printf("==============\n");
	// the_best_head(&head);
	the_best_head (&head);
	find_max (&head);
	zero_one (&head);
	printf("head = %d", head->data);
	
}