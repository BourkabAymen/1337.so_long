/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_char_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:09:17 by abourkab          #+#    #+#             */
/*   Updated: 2022/12/05 21:10:23 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
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
