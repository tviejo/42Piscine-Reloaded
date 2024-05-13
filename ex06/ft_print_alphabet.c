/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:44:56 by tviejo            #+#    #+#             */
/*   Updated: 2024/05/13 22:19:42 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	i;

	i = 96;
	while (i++ < 122)
		ft_putchar(i);
}
/*
int	main(void)
{
	ft_print_alphabet();
}
*/
