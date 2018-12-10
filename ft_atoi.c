/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bast <lle-bast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 21:59:28 by lle-bast          #+#    #+#             */
/*   Updated: 2018/05/30 19:11:36 by lle-bast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i;
	int temp;
	int n;

	i = 0;
	temp = 0;
	n = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		n = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && i < 19)
	{
		temp = temp * 10 + str[i] - '0';
		i++;
	}
	if (i == 19 && n < 0)
		return (0);
	if (i == 19 && n > 0)
		return (-1);
	temp = temp * n;
	return (temp);
}
