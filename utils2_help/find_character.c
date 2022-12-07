/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_character.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:06:12 by abourkab          #+#    #+#             */
/*   Updated: 2022/12/05 21:51:10 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
// This function return the number of occurance of a characer c in the map
int	find_character(char **p, char c)
{
	int	i;
	int	j;
	int	s;

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
