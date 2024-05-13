/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:00:37 by tviejo            #+#    #+#             */
/*   Updated: 2024/05/13 22:29:42 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] != 0 || s2[counter] != 0)
	{
		if (s1[counter] == s2[counter])
		{
			counter ++;
		}
		else
		{
			return (s1[counter] - s2[counter]);
		}
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(char **tab, int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	cpt;

	i = 1;
	ft_sort_int_tab(argv, argc);
	while (i < argc)
	{
		cpt = 0;
		while (str[cpt] != '\0')
		{
			ft_putchar(str[cpt]);
			cpt ++;
		}
		ft_putchar('\n');
		i++;
	}
}
