/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 01:27:59 by nbarreir          #+#    #+#             */
/*   Updated: 2021/02/16 02:10:39 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned long int i;

	i = 0;
	str = (unsigned char *)s;
	while(i < n)
	{
		if(str[i] == (unsigned char)c)
			return(&str[i]);
		i++;
	}
	return(0);
}
