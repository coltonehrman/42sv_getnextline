/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:58:27 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 09:17:32 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_lstmap
**		Parameters	:	(t_list *)lst, t_list *(*f)(t_list *elem)
**		Description	:	creates a new linked list by looping through
**						each element in |lst| and assigned each new
**						element to the return elem from |f(lst)|
**		Return		:	(t_list *) pointer to beginning of new linked list
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*map;
	t_list	*tmp;
	t_list	*map_root;

	if (!lst || !f)
		return (0);
	map_root = 0;
	map = 0;
	while (lst)
	{
		tmp = f(lst);
		(!map) ?
			(map = ft_lstnew(tmp->content, tmp->content_size)) :
			(map->next = ft_lstnew(tmp->content, tmp->content_size));
		free(tmp);
		if (!map_root)
			map_root = map;
		if (!map)
			return (map_root);
		else if (map->next)
			map = map->next;
		lst = lst->next;
	}
	return (map_root);
}
