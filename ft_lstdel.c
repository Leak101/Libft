/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bast <lle-bast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 15:25:41 by lle-bast          #+#    #+#             */
/*   Updated: 2018/05/29 22:57:33 by lle-bast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;
	t_list	*tkn;

	temp = *alst;
	while (temp)
	{
		tkn = temp;
		temp = temp->next;
		ft_lstdelone(&tkn, del);
	}
	*alst = NULL;
}
