/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_dir_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:52:03 by youssama          #+#    #+#             */
/*   Updated: 2022/11/26 15:20:54 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
// This function destroy the window
// if we cancele the game throught the x
int	exit_2(t_vars *vars)
{
	ft_putstr("You have canceled the game throught the x\n");
	mlx_destroy_window(vars->mlx, vars->win);
	exit (0);
}
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
