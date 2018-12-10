/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bast <lle-bast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 15:27:37 by lle-bast          #+#    #+#             */
/*   Updated: 2018/05/30 18:26:23 by lle-bast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*tkn;

	if (!lst)
		return (NULL);
	if (!(tkn = f(lst)))
		return (NULL);
	temp = tkn;
	lst = lst->next;
	while (lst)
	{
		if (!(temp->next = f(lst)))
			return (NULL);
		temp = temp->next;
		lst = lst->next;
	}
	return (tkn);
}
