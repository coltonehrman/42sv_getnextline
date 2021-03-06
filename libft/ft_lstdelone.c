/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:07:57 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 09:15:01 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_lstdelone
**		Parameters	:	(t_list **)alst, void (*del)(void *, size_t)
**		Description	:	takes the first element in |alst|
**						and runs the |del| pointer function on
**						its contents and size, then frees it
**		Return		:	(void)
*/

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;

	if (!alst || !(*alst))
		return ;
	lst = *alst;
	del(lst->content, lst->content_size);
	free(lst);
	*alst = 0;
}
