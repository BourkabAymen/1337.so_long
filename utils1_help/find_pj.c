/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pj.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:37:01 by abourkab          #+#    #+#             */
/*   Updated: 2022/11/30 21:37:03 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
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
