/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_map_put_photo.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:43:11 by abourkab          #+#    #+#             */
/*   Updated: 2022/11/30 21:43:14 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
// This function put the right picture according to
// its character in the map 
void	test_map_put_photo(t_vars *vars)
{
	if (vars->s[vars->tb_i][vars->tb_j] == '1')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->wall, vars->tb_y, vars->tb_z);
	if (vars->s[vars->tb_i][vars->tb_j] == '0')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->free, vars->tb_y, vars->tb_z);
	if (vars->s[vars->tb_i][vars->tb_j] == 'C')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->gold, vars->tb_y, vars->tb_z);
	if (vars->s[vars->tb_i][vars->tb_j] == 'P')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->me, vars->tb_y, vars->tb_z);
	if (vars->s[vars->tb_i][vars->tb_j] == 'E')
		mlx_put_image_to_window(vars->mlx, vars->win,
			vars->exit, vars->tb_y, vars->tb_z);
}
