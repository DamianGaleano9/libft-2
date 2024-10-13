/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 09:56:03 by dmazo-ga          #+#    #+#             */
/*   Updated: 2024/10/13 10:39:40 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;
	t_list	*k;

	if (lst && lst && del)
	{
		k = (t_list *)*lst;
		while (k)
		{
			list = k->next;
			ft_lstdelone (k, del);
			free (k);
			k = list;
		}
		*lst = NULL;
	}
}
