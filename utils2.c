/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:35:42 by abourkab          #+#    #+#             */
/*   Updated: 2022/12/07 10:23:14 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
// This function test the map
int	test(t_vars	*vars, char *tr, t_index *index)
{
	if (test_map(vars->s) == 0 || test_newline(tr) == 0)
	{
		ft_putstr("Error\nIN MAPS\n");
		return (0);
	}
	if (test_vp(vars, index) == 0)
	{
		ft_putstr("Error\nUnvalid_Path\n");
		return (0);
	}
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
	w = w + find_character(p, 'P') + find_character(p, 'E');
	if (w == 2)
		return (1);
	else if (w > 2)
		ft_putstr("Error\nMap contains duplicates characters (exit or start)\n");
	return (0);
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

// This function returns 0 if there's a non valid path in the map
int	test_vp(t_vars	*vars, t_index *s_index)
{
	s_index->indexh_p = indexh('P', vars->s);
	s_index->indexv_p = indexv('P', vars->s);
	if (test_recursive_part_one(vars->s, s_index->indexh_p, s_index->indexv_p))
	{
		if (test_recursive_part_two(vars->s, s_index->indexh_p,
				s_index->indexv_p))
			return (1);
	}
	return (0);
}
