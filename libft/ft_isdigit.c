/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 21:18:34 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 06:09:45 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_isdigit
**		Parameters	:	(int)c
**		Description	:	checks if |c| is a digit in ASCII table
**		Return		:	(int) 1 if is digit else 0
*/

int		ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
