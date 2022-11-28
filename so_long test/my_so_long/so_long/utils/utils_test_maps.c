/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_test_maps.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:17:20 by youssama          #+#    #+#             */
/*   Updated: 2022/11/23 08:03:47 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
// This function return the number of occurance of a characer c in the map
int	find_c(char **p, char c)
{
	int	i;
	int	j;
	int s;

	i = 0;
	j = 0;
	s = 0;
	while (p[i])
	{
		j = 0;
		while (p[i][j])
		{
			if (p[i][j] == c)
				s ++;
			j++;
		}
		i++;
	}
	return (s);
}
// This function calculates the number of collectibles C in the map
void	cal_colec(t_vars *vars)
{
	int	i;
	int	j;

	i = 0;
	vars->collect = 0;
	while (vars->s[i])
	{
		j = 0;
		while (vars->s[i][j])
		{
			if (vars->s[i][j] == 'C')
			{
				vars->collect += 1;
			}
			j++;
		}
		i++;
	}
}
// This function returns y of P 9 (starting position)
int	find_pj(char **p)
{
	int	i;
	int	j;

	i = 0;
	while (p[i])
	{
		j = 0;
		while (p[i][j])
		{
			if (p[i][j] == 'P')
				return (j);
			j++;
		}
		i++;
	}
	return (-1);
}
// This function returns x of P (starting position)
int	find_pi(char **p)
{
	int	i;
	int	j;

	i = 0;
	while (p[i])
	{
		j = 0;
		while (p[i][j])
		{
			if (p[i][j] == 'P')
				return (i);
			j++;
		}
		i++;
	}
	return (-1);
}
// This function returns 0 if there's 2 consecutive /n in
// tr or in the map 
int	test_newline(char *tr)
{
	int	i;

	i = 0;
	if (!tr)
		return (0);
	while (tr[i])
	{
		if (tr[i] == '\n' && tr[i + 1] == '\n')
			return (0);
		i++;
	}
	return (1);
}
