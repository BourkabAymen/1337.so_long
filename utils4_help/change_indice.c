/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_indice.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:04:09 by abourkab          #+#    #+#             */
/*   Updated: 2022/12/05 21:12:30 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
//This function change the previous position of the player by 0
// And change the current position of the player by P
void	change_indice(char *c, char *v)
{
	*c = '0';
	*v = 'P';
}
