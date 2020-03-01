/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 12:27:21 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 09:42:02 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_memset
**		Parameters	:	(void *)b, (int)c, (size_t)len
**		Description	:	sets |len| pieces pf data in |*b| to |c|
**		Return		:	(void *)
**						returns first piece of data that |*b|
**						originally pointed to
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		len--;
	}
	return (b);
}
