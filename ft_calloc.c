/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:09:00 by nbarreir          #+#    #+#             */
/*   Updated: 2021/02/20 02:28:22 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned long int count, unsigned long int size)
{
	void				*str;
	unsigned long int	i;

	i = count * size;
	if (!(str = malloc(i)))
		return (0);
	str = malloc(i);
	ft_bzero(str, i);
	return (str);
}
