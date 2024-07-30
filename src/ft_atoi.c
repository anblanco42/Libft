/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:44:39 by anblanco          #+#    #+#             */
/*   Updated: 2023/10/26 17:58:07 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	x;
	int	i;
	int	sig;

	i = 0;
	sig = 1;
	x = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ((str[i] == 43) || (str[i] == 45))
	{
		if (str[i] == 45)
			sig = sig * -1;
		i++;
	}
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		x = ((x * 10) + (str[i] - 48));
		i++;
	}
	return (x * sig);
}
