/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_recursive_vp.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:38:56 by abourkab          #+#    #+#             */
/*   Updated: 2022/12/05 22:20:40 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
// This function returns 0 if there s a 'C' in p
int	find_c(char **p)
{
	int	i;
	int	j;

	i = 0;
	while (p[i])
	{
		j = 0;
		while (p[i][j])
		{
			if (p[i][j] == 'C')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

// This function check if the map is valid or not
int	test_recursive_part_one(char **s, int x, int y)
{
	if (s[x + 1][y] == '0' || s[x + 1][y] == 'C')
	{
		s[x + 1][y] = 'H';
		test_recursive_part_one(s, x + 1, y);
	}
	if (s[x][y + 1] == '0' || s[x][y + 1] == 'C')
	{
		s[x][y + 1] = 'H';
		test_recursive_part_one(s, x, y + 1);
	}
	if (s[x - 1][y] == '0' || s[x - 1][y] == 'C')
	{
		s[x - 1][y] = 'H';
		test_recursive_part_one(s, x - 1, y);
	}
	if (s[x][y - 1] == '0' || s[x][y - 1] == 'C')
	{
		s[x][y - 1] = 'H';
		test_recursive_part_one(s, x, y - 1);
	}
	return (find_c(s));
}

// This function returns 0 if there s a 'E' in p
int	find_e(char **p)
{
	int	i;
	int	j;

	i = 0;
	while (p[i])
	{
		j = 0;
		while (p[i][j])
		{
			if (p[i][j] == 'E')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

// This function check if the map is valid or not
int	test_recursive_part_two(char **s, int x, int y)
{
	if (s[x + 1][y] == '0' || s[x + 1][y] == 'E' || s[x + 1][y] == 'H')
	{
		s[x + 1][y] = 'T';
		test_recursive_part_two(s, x + 1, y);
	}
	if (s[x + 1][y] == '0' || s[x + 1][y] == 'E' || s[x + 1][y] == 'H')
	{
		s[x + 1][y] = 'T';
		test_recursive_part_two(s, x, y + 1);
	}
	if (s[x + 1][y] == '0' || s[x + 1][y] == 'E' || s[x + 1][y] == 'H')
	{
		s[x + 1][y] = 'T';
		test_recursive_part_two(s, x - 1, y);
	}
	if (s[x + 1][y] == '0' || s[x + 1][y] == 'E' || s[x + 1][y] == 'H')
	{
		s[x + 1][y] = 'T';
		test_recursive_part_two(s, x, y - 1);
	}
	return (find_e(s));
}
