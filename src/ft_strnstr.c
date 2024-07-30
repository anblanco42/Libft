/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:07:32 by anblanco          #+#    #+#             */
/*   Updated: 2023/10/25 19:08:00 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	i;

	x = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while ((haystack[x] != '\0') && (x < len))
	{
		i = 0;
		if (needle[i] == haystack[x])
		{
			while ((needle[i] == haystack[x + i]) && ((i + x) < len))
			{
				if ((needle[i + 1] == '\0') && ((x + i) < len))
					return ((char *)haystack + x);
				i++;
			}
		}
		x++;
	}
	return (NULL);
}
