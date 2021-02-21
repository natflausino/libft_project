/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:28:02 by nbarreir          #+#    #+#             */
/*   Updated: 2021/02/21 04:41:07 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	conver_putnbr(int c, char *str, size_t i)
{
	if (c < 0)
	{
		c = (c * (-1));
		str[0] = '-';
	}
	if (c >= 10)
		conver_putnbr((c / 10), str, (i - 1));
	str[i] = (c % 10) + '0';
}

char	*ft_itoa(int n)
{
	char	*str;
	long int	j;
	size_t	count;

	j = n;
	count = 0;
	if (j <= 0)
		count ++;
	while (j)
	{
		j = (j / 10);
		count++;
	}
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return(NULL);
	str[count] = 0;
	conver_putnbr(n, str, (count - 1));
	return (str);
}
