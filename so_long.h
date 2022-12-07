/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:03:20 by abourkab          #+#    #+#             */
/*   Updated: 2022/12/05 22:31:03 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <mlx.h>
# include <stdio.h>

typedef struct s_vars{
	char	**s;
	void	*mlx;
	void	*win;
	void	*img;
	void	*wall;
	void	*free;
	void	*gold;
	void	*me;
	void	*exit;
	int		t;
	int		w;
	int		i;
	int		y;
	int		prev;
	int		ind_i;
	int		ind_j;
	int		tb_y;
	int		tb_z;
	int		tb_i;
	int		tb_j;
	int		collect;
	int		moves;
	int		width;
	int		height;
	int		wid;
	int		hei;
}		t_vars;

typedef struct s_index{
	int	indexh_p;
	int	indexv_p;
}		t_index;

int		characters_in_map(char **p);
int		indexh(char c, char **p);
int		indexv(char c, char **p);
int		test_ber(char *v);
void	exit_map(void);
void	ft_putstr(char *s);
void	initialize_var(t_vars *vars, int fd, char *tr);
void	cal_colec(t_vars *vars);
int		find_pi(char **p);
int		find_pj(char **p);
int		ft_strlen(char *p);
char	*get_content(int fd, char *tr);
char	**ft_split(char const *s, char c);
int		test_map(char **p);
int		test_vp(t_vars	*vars, t_index *index);
int		test_recursive_part_one(char **s, int x, int y);
int		find_e(char **p);
int		find_c(char **p);
int		test_newline(char *tr);
int		test_recursive_part_two(char **s, int x, int y);
int		test(t_vars	*vars, char *tr, t_index *index);
int		find_character(char **p, char c);
int		test_1(char **p, int j, int *i);
int		test_2(char **p, int i);
int		test_3(char **p, int j);
int		test_4(char **p);
void	start_window(t_vars *vars);
int		put_picture_pixels(t_vars *vars);
void	test_map_put_photo(t_vars *vars);
int		key_hook(int keycode, t_vars *vars);
void	change_indice(char *c, char *v);
void	exit_1(t_vars *vars, int keycode);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	move_right(t_vars *vars);
void	move_down(t_vars *vars);
void	move_left(t_vars *vars);
void	move_up(t_vars *vars);
void	test_right(t_vars *vars);
void	test_down(t_vars *vars);
void	test_left(t_vars *vars);
void	test_up(t_vars *vars);
int		exit_2(t_vars *vars);
#endif
