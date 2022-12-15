/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:25:50 by amsaoub           #+#    #+#             */
/*   Updated: 2022/12/15 16:51:35 by amsaoub          ###   ########.fr       */
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
	
	if (ac==1)
		write(1,"Error",5);
	else 
	{
		i = 0;	
		head = NULL;
		tab = ft_split(ft_strjoin(ac-1, av + 1, " "),' ');

		if (!checkint(tab) || !check_max_min(tab))
			write(1, "error\n", 6);
		while(tab[i])
			ft_lstadd_back(&head, ft_lstnew(ft_atoi(tab[i++])));
	}
	
	


//*************************************************************	
// t_list *h = NULL;
// t_list *lh = NULL;
// t_list *lhh = NULL;


// ft_lstadd_back(&h,ft_lstnew(1));
// ft_lstadd_back(&h,ft_lstnew(2));
// ft_lstadd_back(&h,ft_lstnew(3));ft_lstadd_back(&h,ft_lstnew(4));
// lh = h;
// while(1)
// {
//   printf("%d ",h->data);
//   h = h->next;
//   if(lh == h)
//     break;
// }
// // ra (&h);
// // while(1)
// // {
// //   printf("%d ",h->data);
// //   h = h->next;
// //   if(lhh == h)
// //     break;
// // }
// return 0;
}