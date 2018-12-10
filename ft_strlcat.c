/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bast <lle-bast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 16:16:30 by lle-bast          #+#    #+#             */
/*   Updated: 2018/05/30 18:48:54 by lle-bast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	sizedest;
	size_t	sizesrc;

	i = 0;
	sizedest = ft_strlen((char *)dest);
	sizesrc = ft_strlen((char *)src);
	j = sizedest;
	if (size > 0)
	{
		while (src[i] && j < size - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	if (size <= sizedest)
		return (sizesrc + size);
	return (sizedest + sizesrc);
}
