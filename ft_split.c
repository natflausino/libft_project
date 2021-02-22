/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:08:08 by nbarreir          #+#    #+#             */
/*   Updated: 2021/02/22 00:13:16 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_cpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

static size_t	ft_num_word(char const *s, char deli)
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

static char		*ft_apt_word(char const *s, size_t c)
{
	char 	*str_word;

	str_word = (char *)malloc(sizeof(char) * c + 1);
	if (!str_word)
		return (NULL);
	str_word = ft_cpy(str_word, s, c);
	str_word[c] = '\0';
	return (str_word);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t count;

	i = 0;
	count = 0;
	str = malloc(sizeof(char *) * (ft_num_word(s, c) + 1));
	if (!str)
		return (NULL);
	if (!s)
		return (NULL);
	while(s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			str[count] = ft_apt_word(s + j, i - j);
			count++;
		}

	}
	str[count] = '\0';
	return (str);
}
