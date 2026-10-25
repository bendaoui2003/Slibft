/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendaou <mbendaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 12:47:50 by mbendaou          #+#    #+#             */
/*   Updated: 2026/10/18 14:37:22 by mbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	a1;
	size_t	a2;
	size_t	k;

	a1 = ft_strlen(s1);
	a2 = ft_strlen(s2);
	str = malloc(a1 + a2 + 1);
	if (str == 0)
		return (NULL);
	k = 0;
	while (k < a1)
	{
		str[k] = s1[k];
		k++;
	}
	i = 0;
	while (i < a2)
	{
		str[i + a1] = s2[i];
		i++;
	}
	str[i + a1] = '\0';
	return (str);
}
