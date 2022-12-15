/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaoub <amsaoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:53:32 by amsaoub           #+#    #+#             */
/*   Updated: 2022/12/15 18:50:23 by amsaoub          ###   ########.fr       */
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

int ft_atoi(char *str)
{
	int			i;
	int			sign;
	long long	result;

	i = 0;
	sign =1;
	result = 0;
	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return(result * sign);	
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