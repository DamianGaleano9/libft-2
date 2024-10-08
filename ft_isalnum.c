/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:21:58 by damian            #+#    #+#             */
/*   Updated: 2024/10/08 19:45:00 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (((c >= 'A' && c <= 'Z')
			|| (c >= 'a' && c <= 'z'))
		|| (c >= '0' && c <= '9'));
}

/*
int main () {
	int c = '#';
	printf("Is alnum: %d\n", ft_isalnum(c));
}
*/									
