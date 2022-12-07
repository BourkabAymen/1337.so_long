/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:03:56 by abourkab          #+#    #+#             */
/*   Updated: 2022/11/30 16:23:13 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
// This function destroy the window
// if we cancele the game throught the x
int	exit_2(t_vars *vars)
{
	ft_putstr("You have canceled the game throught the x\n");
	mlx_destroy_window(vars->mlx, vars->win);
	exit (0);
}
