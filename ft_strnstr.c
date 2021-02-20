/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 03:20:30 by nbarreir          #+#    #+#             */
/*   Updated: 2021/02/16 03:31:25 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *m, const char *n, size_t len)
{
	unsigned char *m1;
	unsigned char *n1;
	size_t i;
	size_t	j;

	m1 = (unsigned char *)m;
	n1 = (unsigned char *)n;
	i = 0;
	if(!n1[i])
		return((char *)&m1[i]);
	while (i < len && m1[i])
	{
		j = 0;
		while ((i + j) < len && m1[i + j] == n1[j])
		{
			if (!n1[j + 1])
				return ((char *)&m1[i]);
			j++;
		}
		i++;
	}
	return(0);
}
