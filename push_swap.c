/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:25:50 by amsaoub           #+#    #+#             */
/*   Updated: 2022/12/27 18:15:52 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"



int main(int ac , char **av)
{
	char	**tab;
	int		i;
	t_list	*heada;
	t_list	*headb;
	// t_list *temp;
	
	headb =NULL; 
	if (ac==1)
		return write(1,"Error",5);
	else 
	{
		i = 0;	
		heada = NULL;
		tab = ft_split(ft_strjoin(ac-1, av + 1, " "),' ');

		if (!check_nul(tab,ac))
		return write(1, "Error\n", 6);
		
		
		if (!checkint(tab) || !check_max_min(tab) || !check_duplicates(tab))
			return write(1, "Error\n", 6);
	
	
		while(tab[i])
			ft_lstadd_back(&heada,ft_lstnew(ft_atoi(tab[i++])));

		
	}
	
	the_best_head (&heada);
	// printf("best head %d\n",heada->data);
	find_max (&heada);
	// printf("head a is %d\n",heada->data);
	// zero_one (&heada); badaltha
	push_zero_to_b(&heada ,&headb);
	
	
	while (headb)
	{
	best_move(&headb, &heada);
	final_push(&heada,&headb);
	}
	 qalab_ala_lmin(&heada);
	
	// best_move(&headb, &heada);
	// final_push(&heada,&headb);
	// best_move(&headb, &heada);
	// final_push(&heada,&headb);
	// best_move(&headb, &heada);
	// final_push(&heada,&headb);
	// best_move(&headb, &heada);
	// final_push(&heada,&headb);
	// best_move(&headb, &heada);
	// final_push(&heada,&headb);
	// best_move(&headb, &heada);
	// puts("a3");
	// final_push(&heada,&headb);
	
	// temp = heada;
	// printf("********************a\n");
	// // if (heada != NULL)
	// // {
	// while (temp)
	// {
	// 	printf("%d\n",temp->data);
	// 	temp = temp->next;
	// 	if (temp == heada)
	// 		break;
	// }
	// // }
	// temp = headb;
	// printf("********************B\n");
	// // if (headb != NULL)
	// // {
	// 	while (temp)
	// 	{
	// 		printf("%d\n",temp->data);
	// 		temp = temp->next;
	// 		if (temp == headb)
	// 			break;
	// 	}
	// }
	// temp = heada;
	// printf("********************a\n");
	// if (heada != NULL)
	// {
	// while (1)
	// {
	// 	printf("%d\n",temp->data);
	// 	temp = temp->next;
	// 	if (temp == heada)
	// 		break;
	// }
	// }	
	// temp = heada;
	// printf("********************A\n");
	// if (heada != NULL)
	// {
	// 	while (1)
	// 	{
	// 		printf("%d\n",temp->data);
	// 		temp = temp->next;
	// 		if (temp == heada)
	// 			break;
	// 	}
	// }
}
// 1 7 8 77 -10
// 7 8 77 -10 1
// 8 77 -10 1 7 

