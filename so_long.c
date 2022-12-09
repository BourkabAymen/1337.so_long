/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:10:36 by abourkab          #+#    #+#             */
/*   Updated: 2022/12/09 21:06:34 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// The main program that will be compiled when we execute 
int	main(int argc, char **v)
{
	int		fd;
	char	tr[9999];
	t_vars	vars;
	t_index	index;

	if (argc != 2)
		return (0);
	if (test_ber(v[1]) == 0)
		exit_map();
	fd = open(v[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Error fd\n");
		return (0);
	}
	initialize_var(&vars, fd, tr);
	if (test(&vars, tr, &index) == 0)
		return (0);
	vars.s = ft_split(tr, '\n');
	vars.mlx = mlx_init();
	start_window(&vars);
	put_picture_pixels(&vars);
	mlx_hook(vars.win, 2, 0, key_hook, &vars);
	mlx_hook(vars.win, 17, 0, exit_2, &vars);
	mlx_loop(vars.mlx);
}
