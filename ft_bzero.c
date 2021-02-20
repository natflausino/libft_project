/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbarreir <nbarreir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:12:38 by nbarreir          #+#    #+#             */
/*   Updated: 2021/02/19 23:19:43 by nbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned long int n)
{
	char				*str;
	unsigned long int	i;

	str = (char*)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
