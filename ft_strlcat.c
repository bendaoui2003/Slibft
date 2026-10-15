/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendaou <mbendaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 12:59:10 by mbendaou          #+#    #+#             */
/*   Updated: 2026/10/14 19:59:36 by mbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;
	size_t	k;

	len_dest = 0;
	len_src = 0;
	i = 0;
	while (dst[len_dest])
		len_dest++;
	while (src[len_src])
		len_src++;
	if (len_dest >= size)
		return (len_src + size);
	k = len_dest;
	while (src[i] && dst[k] + i < size - 1)
	{
		dst[k] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_dest + len_src);
}
