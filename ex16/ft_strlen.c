/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelharim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 18:46:35 by aelharim          #+#    #+#             */
/*   Updated: 2016/11/03 18:50:35 by aelharim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		c;

	c = 0;
	while (*str != '\0')
	{
		c++;
		str++;
	}
	return (c);
}
