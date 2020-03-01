/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 21:13:27 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 06:09:04 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_isalpha
**		Parameters	:	(int)c
**		Description	:	checks if |c| is alpha in ASCII table
**		Return		:	(int) 1 if is alpha else 0
*/

int		ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
