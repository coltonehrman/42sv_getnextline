/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 09:51:50 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 06:13:30 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_iswhitespace
**		Parameters	:	(const char)c
**		Description	:	checks if |c| is a whitespace
**						character in ASCII table
**		Return		:	(int) 1 if is whitespace else 0
*/

int		ft_iswhitespace(const char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}
