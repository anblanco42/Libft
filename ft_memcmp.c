/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:41:33 by anblanco          #+#    #+#             */
/*   Updated: 2023/10/25 19:06:44 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		x;
	size_t	y;

	y = 0;
	x = 0;
	while (y < n)
	{
		x = *((unsigned char *)s1 + y) - *((unsigned char *)s2 + y);
		if (x != 0)
			return (x);
		y++;
	}
	return (0);
}
