/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:44:10 by tviejo            #+#    #+#             */
/*   Updated: 2024/05/13 17:44:37 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	if (nb == 2)
		return (2);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int     main(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
        	printf("%d\n",ft_recursive_factorial(i));
		i++;
	}
}
*/
