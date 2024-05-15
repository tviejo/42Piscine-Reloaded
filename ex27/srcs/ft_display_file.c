/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:36:20 by tviejo            #+#    #+#             */
/*   Updated: 2024/05/15 14:56:25 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_read(char *argv)
{
	char	buffer;
	int		byte_read;
	int		fd;

	fd = open(argv, O_RDONLY);
	if (fd < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return (-3);
	}
	byte_read = read(fd, &buffer, 1);
	if (byte_read < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return (-3);
	}
	while (byte_read > 0)
	{
		ft_putchar(buffer);
		byte_read = read(fd, &buffer, 1);
	}
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
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
	return (ft_read(argv[1]));
}
