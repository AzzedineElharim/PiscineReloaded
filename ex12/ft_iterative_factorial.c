/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelharim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:18:55 by aelharim          #+#    #+#             */
/*   Updated: 2016/11/03 17:39:30 by aelharim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		result;

	result = 0;
	if (nb < 0 || nb > 12)
		return (result);
	else
	{
		result = 1;
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
	}
	return (result);
}
