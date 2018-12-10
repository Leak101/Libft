/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bast <lle-bast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 20:54:51 by lle-bast          #+#    #+#             */
/*   Updated: 2018/05/26 19:17:41 by lle-bast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*src;
	char	*dest;

	i = 0;
	src = (char *)str2;
	dest = (char *)str1;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
