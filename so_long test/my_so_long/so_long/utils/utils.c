/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:17:30 by youssama          #+#    #+#             */
/*   Updated: 2022/11/23 07:22:22 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
// This function returns the length of a string
int	ft_strlen(char *p)
{
	int	i;

	i = 0;
	if (!p)
		return (0);
	while (p[i])
		i++;
	return (i);
}
// This function diplays a string
void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}
// This function display Error in case we find that the 
// extansion of the file gaving the map is not .ber
// And we use the function exit from the library stdlib.h
// in order to cause  the normal terminating  of the program
void	exit_map(void)
{
	ft_putstr("Error\n");
	exit (0);
}
// This function display a character
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
// This function display a positive integer
void	ft_putnbr(int n)
{
	long long	k;

	k = n;
	if (k >= 10)
		ft_putnbr(k / 10);
	ft_putchar(k % 10 + 48);
}
