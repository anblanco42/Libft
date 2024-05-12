/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:48:21 by anblanco          #+#    #+#             */
/*   Updated: 2023/10/25 19:06:38 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*aux;

	aux = (void *) s;
	if (n == 0)
		return (NULL);
	while ((n--) > 0)
	{
		if (*aux == (unsigned char)c)
		{
			return ((void *)aux);
		}
		aux++;
	}
	return (NULL);
}
