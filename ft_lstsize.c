/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendaou <mbendaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:38:43 by mbendaou          #+#    #+#             */
/*   Updated: 2026/10/24 20:16:33 by mbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	size_t	count;
	t_list	*node;

	count = 0;
	node = lst;
	while (node != NULL)
	{
		node = node->next;
		count++;
	}
	return (count);
}
