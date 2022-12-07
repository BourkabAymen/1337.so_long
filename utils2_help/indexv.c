/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:38:33 by abourkab          #+#    #+#             */
/*   Updated: 2022/12/05 22:05:39 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
// This function the vertical index of c in p
int	indexv(char c, char **p)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (p[i])
	{
		j = 0;
		while (p[i][j])
		{
			if (p[i][j] == c)
			{
				return (j);
			}
			j++;
		}
		i++;
	}
	return (0);
}
