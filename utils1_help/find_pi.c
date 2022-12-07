/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:36:46 by abourkab          #+#    #+#             */
/*   Updated: 2022/11/30 21:36:49 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
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
