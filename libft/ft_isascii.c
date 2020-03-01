/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 21:23:28 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 06:08:55 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_isascii
**		Parameters	:	(int)c
**		Description	:	checks if |c| is apart of the ASCII table
**						with values 0 - 127
**		Return		:	(int) 1 if is ascii else 0
*/

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
