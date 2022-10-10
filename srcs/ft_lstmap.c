/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:15:58 by znichola          #+#    #+#             */
/*   Updated: 2022/10/10 11:35:11 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstnew;
	t_list	*item;

	lstnew = NULL;
	while (lst != NULL)
	{
		item = ft_lstnew(f(lst->content));
		if (!item)
		{
			ft_lstclear(&lstnew, del);
			return (NULL);
		}
		ft_lstadd_back(&lstnew, item);
		lst = lst->next;
	}
	return (lstnew);
}
	// if (lst == NULL)
	// 	return (NULL);
