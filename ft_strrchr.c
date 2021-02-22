/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 02:41:39 by nbarreir          #+#    #+#             */
/*   Updated: 2021/02/22 02:47:09 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;
	char	*n;

	str = (char *)s;
	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			n = (&str[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&str[i]);
	return (n);
}
