/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 18:32:11 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 09:20:16 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_lstnew
**		Parameters	:	(void const *)content, (size_t)content_size
**		Description	:	creates a new (t_list) and sets its data
**						to the params |content| and |content_size|
**						then sets the (t_list)->next to NULL
**		Return		:	(t_list *) pointer to new linked list
*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (0);
	if (!content)
	{
		lst->content = 0;
		lst->content_size = 0;
		lst->next = 0;
		return (lst);
	}
	lst->content = malloc(content_size);
	if (!lst->content)
	{
		free(lst);
		return (0);
	}
	ft_memcpy(lst->content, content, content_size);
	lst->content_size = content_size;
	lst->next = 0;
	return (lst);
}
