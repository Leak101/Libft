/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bast <lle-bast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 14:48:12 by lle-bast          #+#    #+#             */
/*   Updated: 2018/05/26 22:05:57 by lle-bast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		size;
	char	*trim;

	i = 0;
	j = -1;
	size = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i + size])
		size++;
	while ((s[i + size] == ' ' || s[i + size] == '\n' || s[i + size] == '\t' ||
	s[i + size] == '\0') && size >= 0)
		size--;
	if (!(trim = malloc(sizeof(*trim) * ++size + 1)))
		return (NULL);
	while ((++j) < size)
		trim[j] = s[i + j];
	trim[size] = '\0';
	return (trim);
}
