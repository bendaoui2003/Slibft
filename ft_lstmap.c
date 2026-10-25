/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendaou <mbendaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:03:16 by mbendaou          #+#    #+#             */
/*   Updated: 2026/10/24 18:39:36 by mbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new_list;
	t_list	*new_node;
	void	*conte;

	current = lst;
	new_list = NULL;
	while (current != NULL)
	{
		conte = f(current->content);
		new_node = ft_lstnew(conte);
		if (new_node == NULL)
		{
			del(conte);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		if (new_list == NULL)
			new_list = new_node;
		else
			ft_lstadd_back(&new_list, new_node);
		current = current->next;
	}
	return (new_list);
}
