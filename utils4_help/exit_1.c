/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:43:40 by abourkab          #+#    #+#             */
/*   Updated: 2022/12/05 22:31:45 by abourkab         ###   ########.fr       */
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
		ft_putstr("You have canceled the game throught");
		ft_putstr("the esc 'button keyboard'\n");
		exit (0);
	}
	mlx_destroy_window(vars->mlx, vars->win);
	ft_putstr("You have won the game\n");
	exit (0);
}
