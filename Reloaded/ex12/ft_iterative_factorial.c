/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 06:08:28 by gde-mora          #+#    #+#             */
/*   Updated: 2022/05/25 05:03:10 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1 && nb < 13)
	{
		while (nb > 1)
		{
			result = result * nb;
			nb--;
		}
		return (result);
	}
	return (0);
}
