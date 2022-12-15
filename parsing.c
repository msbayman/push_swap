/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:53:32 by amsaoub           #+#    #+#             */
/*   Updated: 2022/12/15 16:01:01 by amsaoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int checkint (char **tab)
{
	int	i;
	int	j;
	
	i = 0;
	while (tab[i] != '\0')
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			if (tab[i][0] =='-')
				j++;
			if ((tab[i][j] > '9' || '0' > tab[i][j]) && tab[i][j] != '\0')
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

long int ft_atoi(char *str)
{
	long int	i;
	long int	r;
	long int	t;

	i = 0 ;
	r = 1 ;
	t = 0 ;
	
	if (str[i] == '-')
		r = r * -1 ;
	i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		t = t * 10 + str[i] - '0';
		i++;
	}
	return (t * r);
}

int check_max_min (char	**tab)
{
	int	i;
	
	i = 0;
	while (tab[i])
	{
		if ( ft_atoi(tab[i]) <= 2147483647  && ft_atoi(tab[i]) >= -2147483648 )
			i++;
		else
			return(0);
	}
	return (1);
}