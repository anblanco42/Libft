/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:27:39 by anblanco          #+#    #+#             */
/*   Updated: 2023/10/23 00:46:49 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstnew;
	t_list	*nodenew;

	if ((lst == NULL) || (f == NULL) || (del == NULL))
		return (NULL);
	lstnew = NULL;
	while (lst)
	{
		nodenew = ft_lstnew(0);
		if (nodenew == NULL)
		{
			ft_lstclear(&lstnew, del);
			return (NULL);
		}
		nodenew->content = (*f)(lst->content);
		ft_lstadd_back(&lstnew, nodenew);
		lst = lst->next;
	}
	return (lstnew);
}
