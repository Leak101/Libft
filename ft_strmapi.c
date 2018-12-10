/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bast <lle-bast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 14:52:57 by lle-bast          #+#    #+#             */
/*   Updated: 2018/05/26 21:29:01 by lle-bast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*temp;

	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[i])
		i++;
	if (!(temp = malloc(sizeof(*temp) * i + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		temp[i] = f((unsigned int)i, s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
