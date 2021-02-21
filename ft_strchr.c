/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 02:24:18 by nbarreir          #+#    #+#             */
/*   Updated: 2021/02/20 20:53:18 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char *str;
	int i;

	str = (char *)s;
	i = 0;

	while(str[i] != '\0')
	{
		if(str[i] == c)
			return(&str[i]);
		i++;
	}
	if (c == '\0')
		return(&str[i]);
	return(0);
}
