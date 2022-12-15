/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:25:50 by amsaoub           #+#    #+#             */
/*   Updated: 2022/12/15 19:34:10 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

// t_list    *ft_lstlast(t_list *lst)
// {
//     t_list    *p;
//     t_list    *lp;

//     p = lst;
//     lp = lst;
//     if (p == NULL)
//     {
//         return (NULL);
//     }
//     else
//     {
//         while (lp -> next != p)
//             lp = lp -> next;
//         return (lp);
//     }
// }

// t_list    *ft_lstnew(int k)
// {
//     t_list    *p;
    
//         p = malloc(sizeof(t_list));
//         p -> data = k;
//         p -> next = p;
//         p -> prev = p;
// 		p -> sin = 0;
//     return (p);
// }

// void    ft_lstadd_back(t_list **lst, t_list *new)
// {
//     t_list    *p;
//     t_list    *temp;

    
//     if (lst)
//     {
//         if (!*lst)
//             *lst = new;
//         else
//         {
//             p = ft_lstlast(*lst);
//             p -> next = new;
//             new->next = *lst;
//             new -> prev = p;
//             (*lst) -> prev = new;
//         }
//     }    
// }


int main(int ac , char **av)
{
	char	**tab;
	int		i;
	t_list	*head;
	t_list *h;
	
	if (ac==1)
		write(1,"Error",5);
	else 
	{
		i = 0;	
		head = NULL;
		printf("==============\n");
		tab = ft_split(ft_strjoin(ac-1, av + 1, " "),' ');
		// while(tab[i])
		// {
		// 	printf("%s\n", (tab[i]));
		// 	i++;
		// }
		if (!checkint(tab) || check_max_min(tab))
			write(1, "error\n", 6);
	
	
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
	// printf("data %d\n",ft_lstnew(2)->data);
	
		// while(tab[i])
		// 	ft_lstadd_back(&head, ft_lstnew(ft_atoi(tab[i++])));
		// i = 0;
		// h = head;
		//  while(1)
		// {
		// printf("%d ",h->data);
		// h = h->next;
		// if(h == head)
		// 	break;
		// }
	}
	
	


//*************************************************************	
// t_list *h = NULL;
// t_list *lh = NULL;
// t_list *lhh = NULL;


// ft_lstadd_back(&h,ft_lstnew(1));
// ft_lstadd_back(&h,ft_lstnew(2));
// ft_lstadd_back(&h,ft_lstnew(3));ft_lstadd_back(&h,ft_lstnew(4));
// h = head;
// while(1)
// {
//   printf("%d ",h->data);
//   h = h->next;
//   if(lh == h)
//     break;
// }
// // ra (&h);
// while(1)
// {
//   printf("%d ",h->data);
//   h = h->next;
//   if(h == head)
//     break;
// }
// return 0;
}