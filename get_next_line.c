/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 11:22:47 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 12:50:48 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
**	checks the static cache which comes from get_next_line function
**	to see if the next line already exists within it
**	if it does, then it will assign the data to the *line pointer
**	and remove the found data from cache
*/

int	check_cache(char **cache, char **line)
{
	int		i;
	char	*data;
	char	*match;
	char	*rest;

	i = 0;
	data = *cache;
	while (data[i])
	{
		if (data[i] == '\n')
		{
			match = ft_strsub(data, 0, i);
			rest = ft_strsub(data, i + 1, ft_strlen(data) + 1);
			free(data);
			*cache = rest;
			*line = match;
			return (1);
		}
		i++;
	}
	return (0);
}

/*
**	reads data from given fd (file descriptor)
**	and puts it into the cache
*/

int	read_fd(int fd, char **cache)
{
	char	*tmp[2];
	char	*data;
	char	buff[BUFF_SIZE];
	int		bytes_read;

	bytes_read = 0;
	data = *cache;
	bytes_read = read(fd, &buff, BUFF_SIZE);
	if (bytes_read < 0)
		return (-1);
	if (bytes_read > 0)
	{
		tmp[0] = data;
		tmp[1] = ft_strsub(buff, 0, bytes_read);
		*cache = ft_strjoin(tmp[0], tmp[1]);
		free(tmp[0]);
		free(tmp[1]);
	}
	return (bytes_read);
}

/*
**	the core of get_next_line
**	first check to see if we have a valid fd (file descriptor)
**	and if there is a pointer to the line, if none of these are true
**	function immediately returns (-1) to indicate something is wrong
**
**	then set cache for given fd if does not already exist
**
**	then see if the data already exists within the cache
**	if so, it will return (1) to indicate that the next line was read
**
**	then try and read bytes from the fd, if the read encounters an error
**	return (-1) to indicate this
**
**	then check how many bytes were read, if it was 0 this indicates that
**	we have reached the EOF and return (1) or (0) depending on if the
**	cache still has data in it
**
**	last thing, if we havn't returned already recursively call get_next_line
*/

int	get_next_line(int fd, char **line)
{
	static char	*cache[MAX_FD];
	int			bytes_read;

	if (fd < 0 || fd > MAX_FD || !line)
		return (-1);
	if (!cache[fd])
		cache[fd] = ft_strnew(0);
	if (check_cache(&(cache[fd]), line) == 1)
		return (1);
	if ((bytes_read = read_fd(fd, &(cache[fd]))) == -1)
		return (-1);
	else if (bytes_read == 0)
	{
		if (ft_strlen(cache[fd]) > 0)
		{
			*line = ft_strdup(cache[fd]);
			free(cache[fd]);
			cache[fd] = 0;
			return (1);
		}
		return (0);
	}
	return (get_next_line(fd, line));
}
