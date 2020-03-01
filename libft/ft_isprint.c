/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 21:27:04 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 06:11:18 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_isprint
**		Parameters	:	(int)c
**		Description	:	checks if |c| is a printable
**						character in ASCII table
**		Return		:	(int) 1 if is printable else 0
*/

int		ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
