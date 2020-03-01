/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:46:46 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 09:09:04 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_lstadd
**		Parameters	:	(t_list **)alst, (t_list *)new_elm
**		Description	:	adds |new_elm| into memory pointed to by |alst|
**		Return		:	(void)
*/

void	ft_lstadd(t_list **alst, t_list *new_elm)
{
	if (!alst || !new_elm)
		return ;
	new_elm->next = *alst;
	*alst = new_elm;
}
