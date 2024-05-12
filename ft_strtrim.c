/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:21:42 by anblanco          #+#    #+#             */
/*   Updated: 2023/10/22 21:48:14 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*x;
	size_t	i;
	size_t	j;
	int		len;

	j = ft_strlen(s1);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	while (ft_strchr(set, s1[j]) != NULL)
		j--;
	len = j - i + 1;
	x = malloc(len + 1);
	if (!x)
		return (NULL);
	ft_strlcpy(x, (s1 + i), len + 1);
	return (x);
}
