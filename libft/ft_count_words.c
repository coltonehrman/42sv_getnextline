/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 10:20:39 by cehrman           #+#    #+#             */
/*   Updated: 2020/02/20 10:28:34 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(const char *s, char c)
{
	int	count;
	int in_word;

	if (!s)
		return (0);
	count = 0;
	in_word = 0;
	while (*s)
	{
		if (!ft_isspace(*s) && *s != c)
		{
			if (!in_word)
				count++;
			in_word = 1;
		}
		else
			in_word = 0;
		s++;
	}
	return (count);
}
