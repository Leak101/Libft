/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bast <lle-bast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 15:26:58 by lle-bast          #+#    #+#             */
/*   Updated: 2018/05/29 23:06:25 by lle-bast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*tkn;

	temp = lst;
	while (temp)
	{
		tkn = temp;
		temp = temp->next;
		f(tkn);
	}
}
