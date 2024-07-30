/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:32:29 by anblanco          #+#    #+#             */
/*   Updated: 2023/10/25 19:07:34 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	y;

	y = ft_strlen(dst);
	i = 0;
	if (y > dstsize)
		return (dstsize + ft_strlen(src));
	if (dstsize != 0)
	{
		while ((src[i] != '\0') && ((y + i) < (dstsize - 1)))
		{
			dst[y + i] = src[i];
			i++;
		}
	}
	dst[y + i] = '\0';
	return (y + ft_strlen(src));
}
