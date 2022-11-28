/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_maps.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:05:27 by youssama          #+#    #+#             */
/*   Updated: 2022/11/23 05:41:22 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
// This function return 0 if the map is not rectangular
static int	test_1(char **p, int j, int *i)
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
static int	test_2(char **p, int i)
{
	int	k;

	k = 0;
	while (p[0][k] == '1' && p[i - 1][k] == '1')
		k++;
	return (k);
}
// This function return 0 if there's at least a character not equal to 1 in 
// the external vertical walls
static int	test_3(char **p, int j)
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
static int	test_4(char **p)
{
	int	i;
	int	j;
	int c;

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

// This function check the 4 tests
// And check either if there's one P and one E
int	test_map(char **p)
{
	int	i;
	int	j;
	int	w;

	w = 0;
	if (!p)
		return (0);
	j = ft_strlen(p[0]);
	if (test_1(p, j, &i) == 0)
		return (0);
	if (test_2(p, i) != j)
		return (0);
	if (test_3(p, j) == 0)
		return (0);
	if (test_4(p) == 0)
		return (0);
	w = w + find_c(p, 'P') + find_c(p, 'E');
	if (w == 2)
		return (1);
	else if (w > 2)
		ft_putstr("Error\nMap contains duplicates characters (exit or start)\n");
	return (0);
}
