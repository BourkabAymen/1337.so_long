/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_colec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:36:25 by abourkab          #+#    #+#             */
/*   Updated: 2022/11/30 21:36:28 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
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
