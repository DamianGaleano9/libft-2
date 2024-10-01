/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:32:48 by damian            #+#    #+#             */
/*   Updated: 2024/09/19 21:32:48 by damian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	*ft_bzero(void *inp, size_t bytes)
{
	int	i;
	char	*res;

	res = (char *) inp;
	i = 0;
	while (i < (int)bytes)
	{
		res[i] = '\0';
		i++;
	}
}