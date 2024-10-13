/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 10:02:18 by dmazo-ga          #+#    #+#             */
/*   Updated: 2024/10/13 10:40:24 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*list;

	list = (t_list *)lst;
	if (list && f)
	{
		while (list)
		{
			f (list->content);
			list = list->next;
		}
	}
}
