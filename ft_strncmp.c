/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:46:20 by iortega-          #+#    #+#             */
/*   Updated: 2023/03/07 15:25:10 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	aux;

	if (n == 0)
		return (0);
	aux = 0;
	while (*s1 != '\0' && (*s1 == *s2) && (aux < n - 1))
	{
		s1++;
		s2++;
		aux++;
	}
	return (*s1 - *s2);
}