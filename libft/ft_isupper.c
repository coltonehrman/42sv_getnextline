/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 21:32:34 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 06:12:39 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_isupper
**		Parameters	:	(int)c
**		Description	:	checks if |c| is an upper case
**						alphabet character in ASCII table
**		Return		:	(int) 1 if is upper case alpha else 0
*/

int		ft_isupper(int c)
{
	return (c >= 65 && c <= 90);
}
