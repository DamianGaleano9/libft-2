/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 10:55:23 by dmazo-ga          #+#    #+#             */
/*   Updated: 2024/10/13 10:55:23 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		if (del)
			del (lst->content);
	}
}
