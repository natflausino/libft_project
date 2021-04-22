/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 00:27:41 by nbarreir          #+#    #+#             */
/*   Updated: 2021/04/21 17:11:58 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	c;
	int	sig;

	i = 0;
	n = 0;
	c = 0;
	sig = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sig = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		n = str[i] - '0';
		c = (c * 10) + n;
		i++;
	}
	return (c * sig);
}
