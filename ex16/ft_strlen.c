/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:46:59 by tviejo            #+#    #+#             */
/*   Updated: 2024/05/13 17:47:19 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (*str != '\0')
	{
		str ++;
		cpt ++;
	}
	return (cpt);
}
