/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelharim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:36:04 by aelharim          #+#    #+#             */
/*   Updated: 2016/11/04 19:48:24 by aelharim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			nb++;
		i++;
	}
	return (nb);
}