/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 21:30:30 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 06:10:42 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_islower
**		Parameters	:	(int)c
**		Description	:	checks if |c| is a lower case
**						alphabet character in ASCII table
**		Return		:	(int) 1 if is lower case alpha else 0
*/

int		ft_islower(int c)
{
	return (c >= 97 && c <= 122);
}
