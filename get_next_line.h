/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 13:32:14 by cehrman           #+#    #+#             */
/*   Updated: 2020/02/22 19:45:38 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFSIZE
#  define BUFF_SIZE 1 
# endif
# include <stdlib.h>
# include <unistd.h>

int	get_next_line(const int fd, char **line);
#endif
