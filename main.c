/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/07 10:49:54 by twoerdem       #+#    #+#                */
/*   Updated: 2019/02/07 11:29:03 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "get_next_line.h"
#include <fcntl.h>

int		main(int ac, char **argv)
{
	int		ret;
	int		fd;
	int		fd2;
	char	*line;

	ret = 1;
	ft_putendl("Test 1: Jake \n");
	fd = open("text1.txt", O_RDONLY);
	while (ret > 0)
	{
		ret = get_next_line(fd, &line);
		ft_putnbr(ret);
		ft_putstr(": ");
		if (ret == 1)
		{
			ft_putendl(line);
			free(line);
		}
	}
	ft_putendl("Finished Reading\n");
	close(fd);

	ret = 1;
	ft_putendl("Test 2: Shaggy is the most powerful being\n");
	fd = open("text2.txt", O_RDONLY);
	while (ret > 0)
	{
		ret = get_next_line(fd, &line);
		ft_putnbr(ret);
		ft_putstr(": ");
		if (ret == 1)
		{
			ft_putendl(line);
			free(line);
		}
	}
	ft_putendl("Finished Reading\n");
	close(fd);

	ret = 1;
	ft_putendl("Test 3: An extensive list of OwOs and their uses, Multiple FD\n");
	fd = open("text3_1.txt", O_RDONLY);
	fd2 = open("text3_2.txt", O_RDONLY);
	while (ret > 0)
	{
		ret = get_next_line(fd, &line);
		ft_putnbr(ret);
		ft_putstr(": ");
		if (ret == 1)
		{
			ft_putendl(line);
			free(line);
		}
		ret = get_next_line(fd2, &line);
		if (ret == 0)
			break ;
		ft_putnbr(ret);
		ft_putstr(": ");
		if (ret == 1)
		{
			ft_putendl(line);
			free(line);
		}
	}
	ft_putendl("Finished Reading\n");
	close(fd);
	close(fd2);

	if (ac == 2 && argv[1])
	{
		ret = 1;
		ft_putendl("Test 4: And also was about to do that line (line, line, line)\n");
		fd = open("text4.txt", O_RDONLY);
		while (ret > 0)
		{
			ret = get_next_line(fd, &line);
			ft_putnbr(ret);
			ft_putstr(": ");
			if (ret == 1)
			{
				ft_putendl(line);
				free(line);
			}
		}
		ft_putendl("Finished Reading\n");
		close(fd);
	}
	return (0);
}
