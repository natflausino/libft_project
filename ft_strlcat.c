/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:55:48 by nbarreir          #+#    #+#             */
/*   Updated: 2021/02/17 01:33:26 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (j < size && dst[j])
	{
		j++;
	}
	while (i + j + 1 < size && src[i])
	{
		dst[i + j] = src[i];
		i++;
	}
	if (j < size)
		dst[i + j] = 0;
	return(j + ft_strlen(src));
}
