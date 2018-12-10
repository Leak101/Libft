/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bast <lle-bast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 14:51:48 by lle-bast          #+#    #+#             */
/*   Updated: 2018/05/28 20:05:50 by lle-bast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_temp(const char *s, char c, char **tab, int size)
{
	int		i;
	int		j;
	int		tkn;

	i = 0;
	tkn = 0;
	while (s[i] && tkn < size)
	{
		while (s[i] && c == s[i])
			i++;
		j = 0;
		while (s[i + j] && c != s[i + j])
			j++;
		if (!(tab[tkn] = malloc(j + 1)))
			return (0);
		j = 0;
		while (s[i] && c != s[i])
		{
			tab[tkn][j] = s[i++];
			j++;
		}
		tab[tkn++][j] = '\0';
	}
	tab[size] = NULL;
	return (1);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		size;
	char	**tkn;

	i = 0;
	size = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		while (s[i] && c == s[i])
			i++;
		if (s[i])
			size++;
		while (s[i] && c != s[i])
			i++;
	}
	if (!(tkn = malloc(sizeof(*tkn) * (size + 1))))
		return (NULL);
	if (!ft_temp(s, c, tkn, size))
		return (NULL);
	return (tkn);
}
