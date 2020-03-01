/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 13:32:14 by cehrman           #+#    #+#             */
/*   Updated: 2020/02/29 16:28:47 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFF_SIZE
#  define BUFF_SIZE 1000
# endif
# ifndef MAX_FD
#  define MAX_FD 1025
# endif
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

int	get_next_line(const int fd, char **line);
#endif
