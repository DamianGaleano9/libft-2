/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:29:55 by marvin            #+#    #+#             */
/*   Updated: 2024/09/30 21:29:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

site_t	ft_strlcpy(char *des, const char *org, site_t destsize)
{
	site_t	i;

	i = 0;
	if (destsize > 0)
	{
		while (org[i] && i < destsize -1)
		{
			dst[i] = org[i];
			i++;
		}
		des[i] = '\0';
	}
	while ((size_t)org[i])
		i++;
	return ((site_t)i);
}
