/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bast <lle-bast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 14:46:23 by lle-bast          #+#    #+#             */
/*   Updated: 2018/05/21 19:36:09 by lle-bast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *join;

	if (!s1 || !s2)
		return (NULL);
	if (!(join = malloc(sizeof(*join) * (ft_strlen((char *)s1)
	+ ft_strlen((char *)s2)) + 1)))
		return (NULL);
	ft_strcpy(join, (char *)s1);
	ft_strcat(join, (char *)s2);
	return (join);
}
