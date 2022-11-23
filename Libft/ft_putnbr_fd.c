/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:57:41 by mblank            #+#    #+#             */
/*   Updated: 2022/11/23 14:38:25 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	x;

	x = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		x *= -1;
	}
	if (x >= 10)
		ft_putnbr_fd(x / 10, fd);
	ft_putchar_fd(x % 10 + 48, fd);
}
