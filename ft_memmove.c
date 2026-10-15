/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendaou <mbendaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:00:03 by mbendaou          #+#    #+#             */
/*   Updated: 2026/10/15 10:45:30 by mbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*de;
	const unsigned char	*sr;
	size_t				i;

	de = (unsigned char *)dest;
	sr = (const unsigned char *)src;
	i = 0;
	if (sr > de)
	{
		while (i < n)
		{
			de[i] = sr[i];
			i++;
		}
	}
	else if (de > sr)
	{
		i = n;
		while (i > 0)
		{
			i--;
			de[i] = sr[i];
		}
	}
	return (dest);
}
/*int main()
{
    char str[] = "ABCDE";
    ft_memmove(str + 1, str, 4);
    printf("%s", str);
}*/
