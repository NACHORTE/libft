/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:51:36 by iortega-          #+#    #+#             */
/*   Updated: 2023/03/13 12:58:13 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	destl;
	unsigned int	srcl;
	unsigned int	initial;
	char			*aux;

	destl = ft_strlen(dest);
	initial = destl;
	srcl = ft_strlen(src);
	if (size == 0)
		return (srcl);
	if (destl >= size)
		return (srcl + size);
	aux = dest + destl;
	while (*src != '\0' && destl < (size - 1) && size >= 2)
	{
		*aux = *src;
		aux++;
		src++;
		destl++;
	}
	if (size != 0)
		*aux = '\0';
	return (initial + srcl);
}
