/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:25:50 by amsaoub           #+#    #+#             */
/*   Updated: 2022/12/23 20:47:33 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"



int main(int ac , char **av)
{
	char	**tab;
	int		i;
	t_list	*heada;
	t_list	*headb;
	t_list *temp;
	
	headb =NULL; 
	if (ac==1)
		return write(1,"Error",5);
	else 
	{
		i = 0;	
		heada = NULL;
		printf("==============\n");
		tab = ft_split(ft_strjoin(ac-1, av + 1, " "),' ');

		if (!check_nul(tab,ac))
		return write(1, "Error\n", 6);
		
		
		if (!checkint(tab) || !check_max_min(tab) || !check_duplicates(tab))
			return write(1, "Error\n", 6);
	
	
		while(tab[i])
			ft_lstadd_back(&heada,ft_lstnew(ft_atoi(tab[i++])));

		i = 0;
		printf("list is :\n");
		while(tab[i])
		{
			printf("%d\n",heada->data);
			heada = heada->next;
			i++;
		}
	}
	printf("==============\n");
	the_best_head (&heada);
	printf("==============\n");
	find_max (&heada);
	zero_one (&heada);
	printf("==============\n");
	push_zero_to_b(&heada ,&headb);
	temp = heada;
	printf("********************A\n");
	while (1)
	{
		printf("%d\n",temp->data);
		temp = temp->next;
		if (temp == heada)
			break;
	}
	
	temp = headb;
	printf("********************B\n");
	if (headb != NULL)
	{
	while (1)
	{
		printf("%d\n",temp->data);
		temp = temp->next;
		if (temp == headb)
			break;
	}
	}
	// siri_l_a(&heada, &headb);
	// best_move(&headb , &heada);
	temp = headb;
	printf("********************B\n");
	if (headb != NULL)
	{
	while (1)
	{
		
		printf("%d - %d\n",temp->data,temp->sin);
		temp = temp->next;
		if (temp == headb)
			break;
	}
	}
	// pa(&heada,&headb);
	temp = heada;
	printf("********************A\n");
	while (1)
	{
		printf("%d\n",temp->data);
		temp = temp->next;
		if (temp == heada)
			break;
	}
	temp = headb;
	printf("********************B\n");
	if (headb != NULL)
	{
	while (1)
	{
		printf("%d\n",temp->data);
		temp = temp->next;
		if (temp == headb)
			break;
	}
	}
	printf("********************\n");
		// pb(&heada,&headb);
		// printf("********************B\n");
	
		// if(headb != NULL)
		// {
		// printf("%d\n",headb->data);
		// headb = headb->next;
			
		// }
	best_move(&headb, &heada);
	indexing (&headb);
	final_push(&heada,&headb);
	temp = headb;
	// printf("********************B\n");
	// printf("data | bmb | bma | index\n");
	// if (headb != NULL)
	// {
	// while (1)
	// {
	// 	printf("%d | %d | %d |           %d\n",temp->data , temp->bmb ,temp->bma , temp->sum);
	// 	temp = temp->next;
	// 	if (temp == headb)
	// 		break;
	// }
	// }

	printf("********************B\n");
	if (headb != NULL)
	{
	while (1)
	{
		printf("%d\n",temp->data);
		temp = temp->next;
		if (temp == headb)
			break;
	}
	}
	
		temp = heada;
	printf("********************a\n");
	if (heada != NULL)
	{
	while (1)
	{
		printf("%d\n",temp->data);
		temp = temp->next;
		if (temp == heada)
			break;
	}
	}
	
}