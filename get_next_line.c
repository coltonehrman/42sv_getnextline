/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 13:32:23 by cehrman           #+#    #+#             */
/*   Updated: 2020/02/22 14:31:31 by cehrman          ###   ########.fr       */
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

int		get_next_line(const int fd, char **line)
{
	static int	reads = 0;
	char		buff[BUFF_SIZE];
	char		*data;
	int			bytes_read;
	int			total_bytes;
	int			i;
	int			j;

	reads++;
	data = 0;
	bytes_read = 0;
	total_bytes = 0;
	if (!line)
		return (0);
	while ((bytes_read = read(fd, buff, BUFF_SIZE)) > 0)
	{
		total_bytes += bytes_read;
		i = resize_data(&data, bytes_read, total_bytes);
		j = 0;
		while (i < total_bytes)
		{
			if (buff[j] == '\n')
			{
				data[i] = 0;
				*line = data;
				return (1);
			}
			data[i] = buff[j];
			i++;
			j++;
		}
	}
	if (total_bytes > 0)
	{
		i = resize_data(&data, bytes_read, bytes_read + 1);
		data[i] = 0;
	}
	*line = data;
	return (total_bytes > 0);
}
