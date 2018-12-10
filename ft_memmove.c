/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bast <lle-bast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 16:12:59 by lle-bast          #+#    #+#             */
/*   Updated: 2018/05/30 18:40:12 by lle-bast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*dest;
	char	*src;
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	dest = (char *)str1;
	src = (char *)str2;
	if (str2 < str1)
		y = n - 1;
	while (i < n)
	{
		if (y)
			dest[y - i] = src[y - i];
		else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
