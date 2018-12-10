/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bast <lle-bast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 15:09:20 by lle-bast          #+#    #+#             */
/*   Updated: 2018/05/03 17:32:44 by lle-bast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = (char *)str;
	while (i < n)
	{
		temp[i] = c;
		i++;
	}
	return (str);
}
