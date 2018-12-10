/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bast <lle-bast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 14:32:20 by lle-bast          #+#    #+#             */
/*   Updated: 2018/05/28 20:13:11 by lle-bast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int n)
{
	int		len;

	len = 0;
	if (!n)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*temp;
	int		i;
	int		len;

	i = 0;
	len = ft_length(n);
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (!(temp = malloc(sizeof(*temp) * len + 1)))
		return (NULL);
	if (n < 0)
	{
		temp[i++] = '-';
		n = -n;
	}
	temp[len] = '\0';
	while (i < len)
	{
		temp[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (temp);
}
