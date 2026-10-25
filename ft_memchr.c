/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendaou <mbendaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 12:16:19 by mbendaou          #+#    #+#             */
/*   Updated: 2026/10/25 12:16:33 by mbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		ci;
	size_t				i;

	str = (const unsigned char *)s;
	ci = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == ci)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
