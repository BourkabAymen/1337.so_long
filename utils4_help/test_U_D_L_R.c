/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_U_D_L_R.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:44:24 by abourkab          #+#    #+#             */
/*   Updated: 2022/12/05 21:09:40 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
// This function check if there's an exit in the right and if all 
// the collectibles have been eaten in order to quit the window
// otherwise it should display the number of moves 
// and change the caracters from c to P and from P to 0
void	test_right(t_vars *vars)
{
	if (vars->s[vars->ind_i][vars->ind_j + 1] == 'E' && vars->collect == 0)
		exit_1(vars, 0);
	else if (vars->s[vars->ind_i][vars->ind_j + 1] != 'E')
		move_right(vars);
}
// This function check if there's an exit in the down and if all 
// the collectibles have been eaten in order to quit the window
// otherwise it should display the number of moves 
// and change the caracters from c to P and from P to 0

void	test_down(t_vars *vars)
{
	if (vars->s[vars->ind_i + 1][vars->ind_j] == 'E' && vars->collect == 0)
		exit_1(vars, 0);
	else if (vars->s[vars->ind_i + 1][vars->ind_j] != 'E')
		move_down(vars);
}
// This function check if there's an exit in the left and if all 
// the collectibles have been eaten in order to quit the window
// otherwise it should display the number of moves 
// and change the caracters from c to P and from P to 0

void	test_left(t_vars *vars)
{
	if (vars->s[vars->ind_i][vars->ind_j - 1] == 'E' && vars->collect == 0)
		exit_1(vars, 0);
	else if (vars->s[vars->ind_i][vars->ind_j - 1] != 'E')
		move_left(vars);
}
// This function check if there's an exit in the up and if all 
// the collectibles have been eaten in order to quit the window
// otherwise it should display the number of moves 
// and change the caracters from c to P and from P to 0

void	test_up(t_vars *vars)
{
	if (vars->s[vars->ind_i - 1][vars->ind_j] == 'E' && vars->collect == 0)
		exit_1(vars, 0);
	else if (vars->s[vars->ind_i - 1][vars->ind_j] != 'E')
		move_up(vars);
}
