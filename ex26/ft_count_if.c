/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:15:07 by tviejo            #+#    #+#             */
/*   Updated: 2024/05/14 19:31:23 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (tab[1])
	{
		if (f(tab[i]) == 1)
			cpt++;
		i++;
	}
	return (cpt);
}
