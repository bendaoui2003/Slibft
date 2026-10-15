/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:27:59 by mbendaou          #+#    #+#             */
/*   Updated: 2026/10/15 17:45:14 by mbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ci;
	int				i;

	ci = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == ci)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (ci == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
