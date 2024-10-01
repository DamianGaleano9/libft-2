/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damian <damian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:44:33 by damian            #+#    #+#             */
/*   Updated: 2024/09/19 10:44:33 by damian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *inp, int val, size_t bytes)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = (char *) inp;
	while (i < bytes)
	{
		tmp[i] = (unsigned char)val;
		i++;
	}
	return (inp);
}
