/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:34:18 by damian            #+#    #+#             */
/*   Updated: 2024/09/16 17:34:18 by damian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int main()
{
	char c = 128;
	printf("Is a digit: %d\n", ft_isascii(c));		
}
*/