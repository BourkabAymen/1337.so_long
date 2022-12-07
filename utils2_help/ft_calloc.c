/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:51:41 by abourkab          #+#    #+#             */
/*   Updated: 2022/12/05 21:53:20 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
// Cette fonction prend n bytes et y stocke le caractère c 
// (ayant un code ascii) type casted to unsigned char
// dans chaque byte 
// à partir de l'adresse s en passant par une variable buff 
// de type unsigned char 
// qui est le type qui peut etre représenté en 8 bits (1 byte).
static void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*buff;

	buff = s;
	i = 0;
	while (i < n)
	{
		buff[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

//Cette fonction prend n bytes et y stocke the Null terminated character
//dans chaque byte à partir de l'adresse s en appelant la fonction ft_memset
static void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// cette fonction réserve de la mémoire tout en l'initialisant par 0 
// "Null terminated character"
// Dans la calloc on va reserver count element ayant size bytes 
// which means that the calloc function reserve count * size bytes 
void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (count != 0 && size >= SIZE_MAX / count)
		return (NULL);
	mem = malloc(count * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, count * size);
	return (mem);
}
