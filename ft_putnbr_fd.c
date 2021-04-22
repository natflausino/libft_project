/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:32:38 by nbarreir          #+#    #+#             */
/*   Updated: 2021/04/21 17:24:04 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	m;

	m = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		m = (n * -1);
	}
	else
		m = n;
	if (m >= 10)
	{
		ft_putnbr_fd(m / 10, fd);
	}
	ft_putchar_fd(m % 10 + '0', fd);
}
