/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:30:43 by amsaoub           #+#    #+#             */
/*   Updated: 2022/12/11 18:27:20 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWP_H
#define PUSH_SWAP_H

# include<stddef.h>
# include<unistd.h>
# include<limits.h>
# include<stdlib.h>

typedef struct s_list
{
	int	 			data;
	struct s_list	*next;
	struct s_list	*prev;
	int				sin;
	
}	t_list;
#endif