/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:15:51 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/08 12:21:08 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	ft_puterror(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(2, &str[i], 1);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	tab[999999];

	if (argc == 1)
		ft_puterror("File name missing.\n");
	if (argc > 2)
		ft_puterror("Too many arguments.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		read(fd, tab, 999999);
		ft_putstr(tab);
		close(fd);
	}
	return (0);
}
