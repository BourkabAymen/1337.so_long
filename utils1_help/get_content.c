/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_content.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:37:34 by abourkab          #+#    #+#             */
/*   Updated: 2022/11/30 21:37:36 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
// This function stock the content of map in tr with all 
// the newlines between the lines
char	*get_content(int fd, char *tr)
{
	char	str;
	int		b;
	int		h;

	b = 1;
	h = 0;
	while (b != 0)
	{
		b = read(fd, &str, 1);
		if (b == -1)
			return (0);
		if (b != 0)
			tr[h++] = str;
		tr[h] = '\0';
	}
	if (h == 0)
		return (0);
	close (fd);
	return (tr);
}
