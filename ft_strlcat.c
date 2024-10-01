/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damian <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:47:08 by damian            #+#    #+#             */
/*   Updated: 2024/09/30 21:47:08 by damian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *des, const char *org, size_t destsize)
{
	size_t	des_len;
	size_t	org_len;
	size_t	i;

	if ((!org || !des || destsize == 0))
		return (0);
	org_len = ft_strlen(org);
	des_len = ft_strlen(des);
	i = 0;
	if (destsize <= des_len)
		return (destsize + org_len);
	while (org[i] && (des_len + i) < (destsize - 1))
	{
		des[des_len + i] = org[i];
		i++;
	}
	des[des_len + i] = '\0';
	return (des_len + org_len);
}
