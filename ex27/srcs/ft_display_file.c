/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:36:20 by tviejo            #+#    #+#             */
/*   Updated: 2024/05/14 19:38:51 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	buffer[10000 + 1];
	int		byte_read;

	(void)argc;
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (-1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (-2);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return (-3);
	}
	byte_read = read(fd, &buffer, 10000);
	ft_putstr(buffer);
	close(fd);
	return (1);
}
