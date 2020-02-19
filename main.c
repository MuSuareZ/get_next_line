/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:51:47 by msuarez-          #+#    #+#             */
/*   Updated: 2020/02/19 14:31:06 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

/*
	main for testing 1 fd
*/
int			main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		ret;
	int		i;

	if (argc >= 2)
	{
		if (access(argv[1], F_OK) == 0)
		{
			i = 0;
			fd = open(argv[1], O_RDONLY);
			while ((ret = get_next_line(fd, &line)) == 1)
			{
				i++;
				printf("MAIN:%d, line>%s\n", ret, line);
			}
			close(fd);
       	}
	}
	return (1);
}
/*
	main for testing multiple fds
*/
/*
int			main(int argc, char **argv)
{
	int		fd;
 	int		fd2;
	char	*line;
	int		ret;
	int		i;

	if (argc >= 2)
	{
		if (access(argv[1], F_OK) == 0)
		{
			i = 0;
			fd = open(argv[1], O_RDONLY);
			while ((ret = get_next_line(fd, &line)) == 1)
			{
				i++;
				printf("MAIN:%d, line>%s\n", ret, line);
			}
			close(fd);
			i = 0;
			fd2 = open(argv[2], O_RDONLY);
			while ((ret = get_next_line(fd2, &line)) == 1)
			{
				i++;
				printf("MAIN:%d, line>%s\n", ret, line);
			}
			close(fd2);
		}
	}
	return (1);
}
*/
