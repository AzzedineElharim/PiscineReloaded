/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelharim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:40:50 by aelharim          #+#    #+#             */
/*   Updated: 2016/11/03 18:28:05 by aelharim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int		result;

	result = 0;
	if (nb < 0 || nb > 12)
		return (result);
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb > 0)
	{
		result = nb;
		result *= ft_recursive_factorial(nb - 1);
	}
	return (result);
}
