/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_dir.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:37:27 by youssama          #+#    #+#             */
/*   Updated: 2022/11/26 14:59:25 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
// This function destroy the window if we win the game or
// if we cancele the game throught the esc 'button keyboard'
// which its keycode is 53
void	exit_1(t_vars *vars, int keycode)
{
	if (keycode == 53)
	{
		mlx_destroy_window(vars->mlx, vars->win);
		ft_putstr("You have canceled the game throught the esc 'button keyboard'\n");
		exit (0);
	}
	mlx_destroy_window(vars->mlx, vars->win);
	ft_putstr("You have won the game\n");
	exit (0);
}
// This function displays MOVES followed by the number of moves
// followed by a new line 
// and change the number of the collectibles if the player has just eaten one
// and call change indice to do its work
void	move_right(t_vars *vars)
{
	ft_putstr("MOVES: ");
	ft_putnbr(vars->moves++);
	ft_putstr("\n");
	if (vars->s[vars->ind_i][vars->ind_j + 1] == 'C')
		vars->collect -= 1;
	change_indice(&(vars->s[vars->ind_i][vars->ind_j]),
		&(vars->s[vars->ind_i][vars->ind_j + 1]));
	vars->ind_j += 1;
}
// This function displays MOVES followed by the number of moves
// followed by a new line 
// and change the number of the collectibles if the player has just eaten one
// and call change indice to do its work
void	move_down(t_vars *vars)
{
	ft_putstr("MOVES: ");
	ft_putnbr(vars->moves++);
	ft_putstr("\n");
	if (vars->s[vars->ind_i + 1][vars->ind_j] == 'C')
		vars->collect -= 1;
	change_indice(&(vars->s[vars->ind_i][vars->ind_j]),
		&(vars->s[vars->ind_i + 1][vars->ind_j]));
	vars->ind_i += 1;
}
// This function displays MOVES followed by the number of moves
// followed by a new line 
// and change the number of the collectibles if the player has just eaten one
// and call change indice to do its work
void	move_left(t_vars *vars)
{
	ft_putstr("MOVES: ");
	ft_putnbr(vars->moves++);
	ft_putstr("\n");
	if (vars->s[vars->ind_i][vars->ind_j - 1] == 'C')
		vars->collect -= 1;
	change_indice(&(vars->s[vars->ind_i][vars->ind_j]),
		&(vars->s[vars->ind_i][vars->ind_j - 1]));
	vars->ind_j -= 1;
}
// This function displays MOVES followed by the number of moves
// followed by a new line 
// and change the number of the collectibles if the player has just eaten one
// and call change indice to do its work
void	move_up(t_vars *vars)
{
	ft_putstr("MOVES: ");
	ft_putnbr(vars->moves++);
	ft_putstr("\n");
	if (vars->s[vars->ind_i - 1][vars->ind_j] == 'C')
		vars->collect -= 1;
	change_indice(&(vars->s[vars->ind_i][vars->ind_j]),
		&(vars->s[vars->ind_i - 1][vars->ind_j]));
	vars->ind_i -= 1;
}
