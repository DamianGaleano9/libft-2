/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by damian            #+#    #+#             */
/*   Updated: 2024/10/08 19:42:22 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *des, const void *org, size_t bytes)
{
	size_t				i;
	unsigned char		*ndes;
	const unsigned char	*norg;

	if (bytes == 0 || des == org)
		return (des);
	i = 0;
	ndes = (unsigned char *) des;
	norg = (const unsigned char *) org;
	while (i < bytes)
	{
		ndes[i] = norg[i];
		i++;
	}
	return (ndes);
}
