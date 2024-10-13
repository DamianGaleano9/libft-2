/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:03:50 by dmazo-ga          #+#    #+#             */
/*   Updated: 2024/10/13 11:03:50 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int			i;
	t_list		*list;

	i = 0;
	list = (t_list *)lst;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}
