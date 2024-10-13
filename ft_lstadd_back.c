/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 09:50:18 by dmazo-ga          #+#    #+#             */
/*   Updated: 2024/10/13 10:58:44 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (!lst || !new)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		list = *lst;
		while (list->next)
			list = list->next;
		list->next = new;
	}
}
