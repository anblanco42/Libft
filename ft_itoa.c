/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:53:04 by anblanco          #+#    #+#             */
/*   Updated: 2023/10/25 19:05:43 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_int(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*x;
	int			i;
	long int	nbr;

	nbr = (long int)n;
	i = len_int(nbr);
	x = malloc((i + 1) * sizeof(char));
	if (!x)
		return (NULL);
	x[i] = '\0';
	if (nbr == 0)
		x[0] = '0';
	if (nbr < 0)
	{
		x[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr != 0)
	{
		x[i - 1] = (nbr % 10) + 48;
		nbr = nbr / 10;
		i--;
	}
	return (x);
}
