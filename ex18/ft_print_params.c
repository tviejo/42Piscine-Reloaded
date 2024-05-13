/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:59:23 by tviejo            #+#    #+#             */
/*   Updated: 2024/05/13 22:26:03 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		ft_putchar(str[cpt]);
		cpt++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	(void)argc;
	i = 1;
	while (argv[i] != NULL)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
