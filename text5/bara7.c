# include<stddef.h>
# include<unistd.h>
# include<limits.h>
# include<stdlib.h>



typedef struct s_list
{
int                data;
    struct s_list    *next;
    struct s_list    *prev;
    int                sin;
    
}    t_list;
t_list    *ft_lstnew(int k)
{
    t_list    *p;
    
        p = malloc(sizeof(t_list));
        p -> data = k;
        p -> next = p;
        p -> prev = p;
        p -> sin = 0;
    return (p);
}
pb (t_list **a, t_list **b)
{
    int temp ;
    t_list *del;

    del = *b; 
    temp = (*a) -> data;
    ft_lstadd_back(*b,ft_lstnew(temp));
    sb(*a);
    (*a)->prev->next = (*a)->next;
    (*a)->next->prev =(*a)->prev;
    (*a)=(*a)->next;
    free(del);
}
sb (t_list **lst)
{
    int temp;
    t_list *t;

    t = *lst;
    temp = t -> data;
    t->data = t->next->data;
    t -> next -> data = temp;
}
t_list    *ft_lstlast(t_list *lst)
{
    t_list    *p;
    t_list    *lp;

    p = lst;
    lp = lst;
    if (p == NULL)
    {
        return (NULL);
    }
    else
    {
        while (lp -> next != p)
            lp = lp -> next;
        return (lp);
    }
}



void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list    *p;
    t_list    *temp;

    
    if (lst)
    {
        if (!*lst)
            *lst = new;
        else
        {
            p = ft_lstlast(*lst);
            p -> next = new;
            new->next = *lst;
            new -> prev = p;
            (*lst) -> prev = new;
        }
    }    
}


int main() {
t_list *h = NULL;
t_list *lh = NULL;
t_list *b = NULL;
t_list *lhh = NULL;


ft_lstadd_back(&h,ft_lstnew(1));
ft_lstadd_back(&h,ft_lstnew(2));
ft_lstadd_back(&h,ft_lstnew(3));
ft_lstadd_back(&h,ft_lstnew(4));
pb (&h,&b);
lhh = b;
lh = h;
while(1)
{
  printf("%d ",h->data);
  h = h->next;
  if(lh == h)
    break;
}
printf("\n");
while(1)
{
  printf("%d ",b->data);
  b = b->next;
  if(lhh == b)
    break;
}
}