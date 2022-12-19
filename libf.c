/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libf.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:38:09 by amsaoub           #+#    #+#             */
/*   Updated: 2022/12/19 15:08:00 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

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

t_list    *ft_lstnew(int k)
{
    t_list    *p;
    
        p = malloc(sizeof(t_list));
		if(!p)
			return (NULL);
        p->data = k;
        p->next = p;
        p->prev = p;
		p->sin = 1;
		p->push = 0;
    return (p);
}

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    // t_list    *p;
    // t_list    *temp;

    
    // if (lst)
    // {
    //     if (!*lst)
    //         *lst = new;
    //     else
    //     {
    //         p = ft_lstlast(*lst);
    //         p -> next = new;
    //         new->next = *lst;
    //         new -> prev = p;
    //         (*lst) -> prev = new;
    //     }
    // }    
	t_list    *nextlst;
    t_list    *head;

    if (!new)
        return ;
    if (!*lst)
    {
        *lst = new;
        return ;
    }
    head = *lst;
    nextlst = *lst;
    while (nextlst->next != head)
        nextlst = nextlst->next;
    nextlst->next = new;
    new->next = head;
    new->prev = nextlst;
    head->prev = new;
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{	
	  if (!new)
        return ;
    new->next = new;
    new->prev = new;
    if (*lst)
    {
        new->next = *lst;
        new->prev = (*lst)->prev;
        (*lst)->prev->next = new;
        (*lst)->prev = new;
    }
    *lst = new;
}
int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char    *ft_strcat(char *dest, char *src)
{
    int    i;
    int    j;

    i = 0;
    j = 0;
    if (!dest || !src)
        return (dest);
    while (dest[i])
        i++;
    while (src[j])
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}

char    *get_str(int size, char **strs, char *sep)
{
    char    *str;
    int        i;
    int        sep_l;
    int        str_l;

    str_l = 0;
    i = 0;
    if (size == 0)
    {
        str = malloc(sizeof(char));
        *str = 0;
        return (str);
    }
    while (i < size)
    {
        str_l += ft_strlen(strs[i]);
        i++;
    }
    sep_l = ft_strlen(sep) * (size - 1);
    str = malloc(sizeof(char) * (str_l + sep_l));
    return (str);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    int        j;
    int        k;
    int        i;
    char    *str;

    str = get_str(size, strs, sep);
    i = -1;
    k = 0;
    while (++i < size)
    {
        j = 0;
        while (strs[i][j])
        {
            str[k++] = strs[i][j];
            j++;
        }
        j = 0;
        while (sep[j] && i != size - 1)
        {
            str[k++] = sep[j];
            j++;
        }
    }
    str[k] = '\0';
    return (str);
}

char    **error_malloc(char **tab)
{
    unsigned int    i;

    i = 0;
    while (tab[i])
        free(tab[i++]);
    free(tab);
    return (NULL);
}

int    word_count(const char *str, char c)
{
    int    i;
    int    count;

    i = 0;
    count = 0;
    while (str[i])
    {
        if (str[i] == c)
            i++;
        else
        {
            count++;
            while (str[i] != c && str[i])
                i++;
        }
    }
    return (count);
}

char    *get_word(const char *s1, int *index, char c)
{
    char    *copy;
    int        word_len;
    int        i;

    word_len = 0;
    while (s1[*index] == c)
        (*index)++;
    i = *index;
    while (s1[i] && s1[i] != c)
    {
        word_len++;
        i++;
    }
    copy = malloc(sizeof(char) * (word_len + 1));
    if (!copy)
        return (NULL);
    i = 0;
    while (s1[*index] && s1[*index] != c)
        copy[i++] = s1[(*index)++];
    copy[i] = '\0';
    return (copy);
}

char    **ft_split(char const *s, char c)
{
    char    **arr;
    int        index;
    int        wc;
    int        i;

    index = 0;
    i = 0;
    if (!s)
        return (NULL);
    wc = word_count(s, c);
    arr = malloc(sizeof(char *) * (wc + 1));
    if (!arr)
        return (NULL);
    while (i < wc)
    {
        arr[i] = get_word(s, &index, c);
        if (!arr[i])
            return (error_malloc(arr));
        i++;
    }
    arr[i] = 0;
    return (arr);
}
