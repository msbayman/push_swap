
// # include<stddef.h>
// # include<unistd.h>
// # include<limits.h>
// # include<stdlib.h>
// # include<stdio.h> 
// # include<string.h>

// typedef struct s_list
// {
//     int                 data;
//     struct s_list    *next;
//     struct s_list    *prev;
//     int                sin;
//     int                push;
    
// }    t_list;

// void the_best_head (t_list **head)
// {
//     t_list *temp;
//     t_list *i;
//     t_list *j;

//     temp = *head;
    
//     while (1)
//     {
//         i = temp;
//         j = i;
//         while (j->next != temp)
//         {
//             if (i->data < j->data)
//             {
//                 (i->sin)++;
//                 i = j;
//                 j = j->next;
//             }
//             else
//             j=j->next;
//         }
//         temp = temp->next;
//         if(temp == *head)
//         break ;
//     }
//     temp = *head;
//     while(1)
//     {
//         printf("%d\n",temp->sin);
//         temp = temp ->next;
//         if(temp == *head)
//         break;
//     }

// }
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
//         if(!p)
//             return (NULL);
//         p->data = k;
//         p->next = p;
//         p->prev = p;
//         p->sin = 1;
//         p->push = 0;
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
// int main() {
// t_list    *p;
// t_list    *k;
// p=NULL;
// k=p;
// ft_lstadd_back(&k, ft_lstnew(1));
// ft_lstadd_back(&k, ft_lstnew(2));
// ft_lstadd_back(&k, ft_lstnew(5));
// ft_lstadd_back(&k, ft_lstnew(3));
// the_best_head (&k);
//   return 0;
// }
// void    ft_go_to_a(t_list **lsta, t_list **lstb, t_moves *Nmoves)
// {
//     while(Nmoves->besta > 0 && Nmoves->bestb > 0)
//     {
//         ft_rotate_rr(lstb, lsta);
//         Nmoves->besta--;
//         Nmoves->bestb--;
//     }
//     while(Nmoves->besta < 0 && Nmoves->bestb < 0)
//     {
//         ft_reverse_rr(lstb, lsta);
//         Nmoves->besta++;
//         Nmoves->bestb++;
//     }
//     while(Nmoves->besta > 0)
//     {
//         ft_rotate_a(lsta);
//         Nmoves->besta--;
//     }
//     while(Nmoves->besta < 0)
//     {
//         ft_reverse_a(lsta);
//         Nmoves->besta++;
//     }
//     ft_go_to_a_rest(lsta, lstb, &Nmoves);
// }

// void    ft_go_to_a_rest(t_list **lsta, t_list **lstb, t_moves *Nmoves)
// {
//     while(Nmoves->bestb > 0)
//     {
//         ft_rotate_b(lstb);
//         Nmoves->bestb--;
//     }
//     while(Nmoves->bestb < 0)
//     {
//         ft_reverse_b(lstb);
//         Nmoves->bestb++;
//     }
// }