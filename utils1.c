/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:13:09 by abourkab          #+#    #+#             */
/*   Updated: 2022/12/09 21:04:27 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
// This function return 0 if the map is not .ber
int	test_ber(char *v)
{
	int	i;

	i = ft_strlen(v);
	if (i < 5)
		return (0);
	if (v[8] == 'r' && v[7] == 'e'
		&& v[6] == 'b' && v[5] == '.')
		return (0);
	if (v[i - 1] != 'r' || v[i - 2] != 'e'
		|| v[i - 3] != 'b' || v[i - 4] != '.')
		return (0);
	return (1);
}

// This function display Error in case we find that the 
// extansion of the file gaving the map is not .ber
// And we use the function exit from the library stdlib.h
// in order to cause  the normal terminating  of the program
void	exit_map(void)
{
	ft_putstr("Error\n");
	ft_putstr("The map's extension is not ber \n");
	exit (0);
}

// This function diplays a string
void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}

// This function initialize all the variables  declared in
// vars
// 50 pixel = 1.32 cm is the length of each part (yajoura)
//in the wall 
void	initialize_var(t_vars *vars, int fd, char *tr)
{
	vars->moves = 1;
	vars->s = ft_split(get_content(fd, tr), '\n');
	if (vars->s == NULL)
		return ;
	vars->ind_i = find_pi(vars->s);
	vars->ind_j = find_pj(vars->s);
	cal_colec(vars);
	vars->tb_y = 0;
	vars->tb_z = -50;
	vars->tb_i = 0;
	vars->tb_j = 0;
 	vars->height = 0;
	while (vars->s[vars->height] != 0)
		vars->height++;
	vars->height *= 50;
	vars->width = 0;
	vars->width = ft_strlen(vars->s[0]);
	vars->width *= 50;
}
