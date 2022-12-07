/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   characters_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:49:48 by abourkab          #+#    #+#             */
/*   Updated: 2022/12/05 21:47:29 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
// This function return the number of characters in the map
int	characters_in_map(char **p)
{
	int	i;

	i = 0;
	while (p[i])
		i++;
	return (i * ft_strlen(p[0]));
}
