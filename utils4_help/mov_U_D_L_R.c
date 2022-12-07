/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_U_D_L_R.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:03:41 by abourkab          #+#    #+#             */
/*   Updated: 2022/12/05 21:10:03 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

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
