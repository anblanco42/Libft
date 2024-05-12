/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:52:08 by anblanco          #+#    #+#             */
/*   Updated: 2023/10/10 14:21:18 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*x;
	size_t	len;

	len = (ft_strlen(s1)) + (ft_strlen(s2)) + 1;
	x = malloc(len);
	if (!x)
		return (NULL);
	ft_strlcpy(x, s1, (ft_strlen(s1) + 1));
	ft_strlcat(x, s2, len);
	return (x);
}
