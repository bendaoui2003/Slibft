/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendaou <mbendaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 11:26:46 by mbendaou          #+#    #+#             */
/*   Updated: 2026/10/18 13:14:36 by mbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	n;
	size_t	k;

	i = ft_strlen(s);
	k = 0;
	if (start > i)
		return (ft_strdup(""));
	n = i - start;
	if (n > len)
		n = len;
	str = malloc(n + 1);
	if (str == 0)
		return (NULL);
	while (k < n)
	{
		str[k] = s[start + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}
