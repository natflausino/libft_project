/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 02:43:27 by nbarreir          #+#    #+#             */
/*   Updated: 2021/02/20 03:46:24 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (!src || !dst)
		return (0);
	if (dst == src)
		return (dst);
	if (src >= dst)
		ft_memcpy(dst, src, len);
	else
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	return (d);
}
