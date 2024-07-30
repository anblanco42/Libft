/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:02:25 by anblanco          #+#    #+#             */
/*   Updated: 2023/10/04 20:09:27 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*aux;

	aux = (char *)malloc(ft_strlen(s1) + 1);
	if ((void *)aux == NULL)
		return (NULL);
	ft_strlcpy(aux, s1, ft_strlen(s1) + 1);
	return (aux);
}
