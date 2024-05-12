/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:10:56 by anblanco          #+#    #+#             */
/*   Updated: 2023/10/12 02:19:44 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	x;

	x = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		x = x * -1;
	}
	if (x > 9)
	{
		ft_putnbr_fd((x / 10), fd);
		ft_putchar_fd((x % 10) + 48, fd);
	}
	else
	{
		ft_putchar_fd((x + 48), fd);
	}
}
