/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_1_2_3_4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:04:46 by abourkab          #+#    #+#             */
/*   Updated: 2022/12/05 21:55:49 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
// This function return 0 if the map is not rectangular
int	test_1(char **p, int j, int *i)
{
	*i = 0;
	while (p[*i])
	{
		if (j != ft_strlen(p[*i]))
			return (0);
		*i += 1;
	}
	return (1);
}

// This function return 0 if there's at least a character not equal to 1 in 
// the external horizontal walls
int	test_2(char **p, int i)
{
	int	k;

	k = 0;
	while (p[0][k] == '1' && p[i - 1][k] == '1')
		k++;
	return (k);
}

// This function return 0 if there's at least a character not equal to 1 in 
// the external vertical walls
int	test_3(char **p, int j)
{
	int	i;

	i = 0;
	while (p[i])
	{
		if (p[i][0] != '1' || p[i][j - 1] != '1')
			return (0);
		i++;
	}
	return (1);
}

// This function returns 1 if there's only 0, 1, C, P, E
// and at least one C
// Otherwise it returns 0
int	test_4(char **p)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (p[i])
	{
		j = 0;
		while (p[i][j])
		{
			if (p[i][j] != '0' && p[i][j] != '1' && p[i][j] != 'C'
					&& p[i][j] != 'E' && p[i][j] != 'P')
				return (0);
			if (p[i][j] == 'C')
				c++;
			j++;
		}
		i++;
	}
	if (c == 0)
		return (0);
	return (1);
}
