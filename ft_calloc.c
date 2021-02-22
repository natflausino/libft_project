/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:09:00 by nbarreir          #+#    #+#             */
/*   Updated: 2021/02/22 03:04:54 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned long int count, unsigned long int size)
{
	char	*str;

	if (!(str = malloc(count * size)))
		return (NULL);
	ft_memset(str, 0, (count * size));
	return (str);
}
