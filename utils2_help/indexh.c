/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexh.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:38:20 by abourkab          #+#    #+#             */
/*   Updated: 2022/12/05 22:03:51 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
// This function the horizontal index of c in p
int	indexh(char c, char **p)
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
				return (i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
