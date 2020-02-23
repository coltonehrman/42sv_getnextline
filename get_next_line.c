/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 13:32:23 by cehrman           #+#    #+#             */
/*   Updated: 2020/02/22 20:26:05 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		resize_data(char **data, int bytes_read, int total_bytes)
{
	char	*cpy;
	int		i;

	i = 0;
	if (*data)
	{
		cpy = *data;
		*data = 0;
		*data = (char *)malloc(sizeof(char) * total_bytes);
		while (i < (total_bytes - bytes_read))
		{
			(*data)[i] = cpy[i];
			i++;
		}
		free(cpy);
		cpy = 0;
	}
	else
		*data = (char *)malloc(sizeof(char) * bytes_read);
	return (i);
}

int		copy_buff(char *buff, char **data, int *i, int total_bytes)
{
	int j;

	j = 0;
	while (*i < total_bytes)
	{
		if (buff[j] == '\n')
		{
			(*data)[*i] = 0;
			return (1);
		}
		(*data)[*i] = buff[j];
		(*i)++;
		j++;
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static int	reads = 0;
	char		buff[BUFF_SIZE];
	char		*data;
	int			bytes[2];
	int			i[2];

	reads++;
	data = 0;
	bytes[1] = 0;
	if (!line || fd < 0)
		return (-1);
	while ((bytes[0] = read(fd, buff, BUFF_SIZE)) > 0)
	{
		bytes[1] += bytes[0];
		i[0] = resize_data(&data, bytes[0], bytes[1]);
		if ((copy_buff(buff, &data, &(i[0]), bytes[1]) == 1))
			return ((*line = data) ? 1 : 1);
	}
	*line = data;
	if (bytes[1] > 0 && (i[0] = resize_data(&data, bytes[0], bytes[1])))
		data[i[0]] = 0;
	*line = data;
	if (bytes[0] <= 0 && bytes[1] < 1)
		return (bytes[0]);
	return (bytes[1] > 0 ? 1 : -1);
}

/*
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int fd[2];
	int res[2];
	char *line[2];
	fd[0] = open(argv[1], O_RDONLY);
	
	while ((res[0] = get_next_line(fd[0], &(line[0]))) > 0)
	{
		printf("fd: %d - %s\n", fd[0], line[0]);
	}
	close(fd[0]);

	fd[1] = open(argv[2], O_RDONLY);
	while ((res[1] = get_next_line(fd[1], &(line[1]))) > 0)
	{
		printf("fd: %d - %s\n", fd[1], line[1]);
	}
	close(fd[1]);

	return (0);
}
*/
