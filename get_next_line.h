/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 11:49:28 by msuarez-          #+#    #+#             */
/*   Updated: 2019/11/11 12:23:55 by msuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# define FD_MAX 4864

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"

int		get_next_line(const int fd, char **line);

#endif
