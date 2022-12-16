/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:30:43 by amsaoub           #+#    #+#             */
/*   Updated: 2022/12/16 15:50:41 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include<stddef.h>
# include<unistd.h>
# include<limits.h>
# include<stdlib.h>
# include<stdio.h> 

typedef struct s_list
{
	int	 			data;
	struct s_list	*next;
	struct s_list	*prev;
	int				sin;
	
}	t_list;

void sa(t_list **lst);
void sb(t_list **lst);
void ss(t_list **lsta, t_list **lstb);
void pa(t_list **a, t_list **b);
void pb(t_list **a, t_list **b);
void ra(t_list **lst);
void rb(t_list **lst);
void rr(t_list **lsta, t_list **lstb);
void rra(t_list **lst);
void rrb(t_list **lst);
void rrr(t_list **lsta, t_list **lstb);
t_list    *ft_lstlast(t_list *lst);
t_list    *ft_lstnew(int k);
void    ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
char	*ft_strjoin(int size, char **strs, char *sep);
int	ft_strlen(char *str);
char    **error_malloc(char **tab);
int    word_count(const char *str, char c);
char    *get_word(const char *s1, int *index, char c);
char    **ft_split(char const *s, char c);
int checkint (char **tab);
int ft_atoi(char *str);
int check_max_min (char **tab);
int check_duplicates(char **tab);
long ft_atoilong(char *str);
#endif