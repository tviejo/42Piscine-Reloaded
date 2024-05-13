/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:42:59 by tviejo            #+#    #+#             */
/*   Updated: 2024/05/13 22:53:06 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	if (nb > 12)
		return (0);
	if (nb == 2)
		return (2);
	result = nb;
	while (nb > 2)
	{
		nb --;
		result = result * nb;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;

	i = 0;
	while (i < 20)

	{
		printf("%d\n",ft_iterative_factorial(i));
		i++;
	}
}
*/
