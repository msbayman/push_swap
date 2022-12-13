/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libf.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:38:09 by amsaoub           #+#    #+#             */
/*   Updated: 2022/12/12 18:24:18 by amsaoub          ###   ########.fr       */
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
        p -> data = k;
        p -> next = p;
        p -> prev = p;
		p -> sin = 0;
    return (p);
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

void	ft_lstadd_front(t_list **lst, t_list *new)
{	
	if (lst)
	{
		if (!*lst)
			*lst = new;
		else
		{
			new -> next = *lst;
			*lst = new;
		}
	}
}
int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		n;
	int		a;
	int		b;
	int		count;

	b = 0;
	n = 0;
	a = 0;
	count = 1;
	while (a < size)
		count += ft_strlen(strs[a++]) + ft_strlen(sep);
	tab = malloc(sizeof(char *) * count);
	a = -1;
	while (++a < size)
	{
		while (strs[a][b])
			tab[n++] = strs[a][b++];
		b = 0;
		while (sep[b] && a < size - 1)
			tab[n++] = sep[b++];
		b = 0;
	}
	tab[n] = '\0';
	return (tab);
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