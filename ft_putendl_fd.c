/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:55:38 by iortega-          #+#    #+#             */
/*   Updated: 2023/03/13 14:27:22 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (*s != '\0')
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
	else
		ft_putchar_fd('\n', fd);
}
