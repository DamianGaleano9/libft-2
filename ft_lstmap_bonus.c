/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 10:59:31 by dmazo-ga          #+#    #+#             */
/*   Updated: 2024/10/13 10:59:31 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list	*list;
	t_list	*item;

	if (!lst || !f)
		return (NULL);
	item = ft_lstnew(f(lst->content));
	if (!item)
		return (NULL);
	list = item;
	lst = lst->next;
	while (lst)
	{
		item = ft_lstnew(f(lst->content));
		if (!item)
		{
			ft_lstclear(&list, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&list, item);
	}
	return (list);
}
