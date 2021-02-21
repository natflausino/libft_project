/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:08:08 by nbarreir          #+#    #+#             */
/*   Updated: 2021/02/21 17:40:26 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_num_palavras(char const *s, char deli)
{
	size_t	i;
	size_t	str_num;

	i = 0;
	str_num = 0;
	while (s[i])
	{
		if (s[i] != deli)
			str_num++;
		while (s[i] != deli && s[i + 1])
			i++;
		i++;
	}
	return (str_num);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	str = malloc(sizeof(char **) * (ft_num_palavras(s, c) + 1));
	if (!str)
		return (NULL);
	return (str);
}
