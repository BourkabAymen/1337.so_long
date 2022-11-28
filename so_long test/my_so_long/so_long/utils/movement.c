/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:42:18 by youssama          #+#    #+#             */
/*   Updated: 2022/11/26 17:08:32 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
//This function change the previous position of the player by 0
// And change the current position of the player by P
void	change_indice(char *c, char *v)
{
	*c = '0';
	*v = 'P';
}
// Complete list of AppleScript key codes : 53 = esc, 13 = w, 0 = a, 1 = s
// 2 = d
// when we press w or a or s or d or esc
// this function check if there's a wall before displaying the number of moves
// and changing the caracters from c to P and from P to 0
// and / or quiting the window
// This function calls the function render in order to put all the images in 
// there right places after all the changes done after cleaning 
// the window in black by mlx_clear_window
int	key_hook(int keycode, t_vars *vars)
{
	if (keycode == 53)
		exit_1(vars, keycode);
	if (keycode == 2)
		if ((vars->s[vars->ind_i][vars->ind_j + 1] == '0'
			|| vars->s[vars->ind_i][vars->ind_j + 1] == 'C'
			|| vars->s[vars->ind_i][vars->ind_j + 1] == 'E'))
			test_right(vars);
	if (keycode == 1)
		if ((vars->s[vars->ind_i + 1][vars->ind_j] == '0'
			|| vars->s[vars->ind_i + 1][vars->ind_j] == 'C'
			|| vars->s[vars->ind_i + 1][vars->ind_j] == 'E'))
			test_down(vars);
	if (keycode == 0)
		if ((vars->s[vars->ind_i][vars->ind_j - 1] == '0'
			|| vars->s[vars->ind_i][vars->ind_j - 1] == 'C'
			|| vars->s[vars->ind_i][vars->ind_j - 1] == 'E'))
			test_left(vars);
	if (keycode == 13)
		if ((vars->s[vars->ind_i - 1][vars->ind_j] == '0'
			|| vars->s[vars->ind_i - 1][vars->ind_j] == 'C'
			|| vars->s[vars->ind_i - 1][vars->ind_j] == 'E'))
			test_up(vars);
	mlx_clear_window(vars->mlx, vars->win);
	render(vars);
	return (0);
}
