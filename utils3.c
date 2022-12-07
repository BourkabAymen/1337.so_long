/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:04:21 by abourkab          #+#    #+#             */
/*   Updated: 2022/12/05 21:33:18 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// This function start a new window 
// it initialises certain pointers to
// certain images with specifying their paths
void	start_window(t_vars *vars)
{
	vars->win = mlx_new_window(vars->mlx, vars->width, vars->height, "so long");
	vars->wall = mlx_xpm_file_to_image(vars->mlx, "./pictures/wallx.xpm",
			&vars->hei, &vars->wid);
	vars->me = mlx_xpm_file_to_image(vars->mlx, "./pictures/me.xpm",
			&vars->hei, &vars->wid);
	vars->gold = mlx_xpm_file_to_image(vars->mlx, "./pictures/coll.xpm",
			&vars->hei, &vars->wid);
	vars->exit = mlx_xpm_file_to_image(vars->mlx, "./pictures/ex.xpm",
			&vars->hei, &vars->wid);
	vars->free = mlx_xpm_file_to_image(vars->mlx, "./pictures/free.xpm",
			&vars->hei, &vars->wid);
}

// This function calls test_map_put_photo for each
// character in the map 
int	put_picture_pixels(t_vars *vars)
{
	vars->tb_i = 0;
	vars->tb_z = 0;
	while (vars->s[vars->tb_i])
	{
		vars->tb_j = 0;
		vars->tb_y = 0;
		while (vars->s[vars->tb_i][vars->tb_j])
		{
			test_map_put_photo(vars);
			vars->tb_y = vars->tb_y + 50;
			vars->tb_j += 1;
		}
		vars->tb_i += 1;
		vars->tb_z = vars->tb_z + 50;
	}
	return (0);
}
